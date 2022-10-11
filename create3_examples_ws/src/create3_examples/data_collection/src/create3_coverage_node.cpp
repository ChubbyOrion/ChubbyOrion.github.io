// Copyright 2021 iRobot Corporation. All Rights Reserved.

#include "create3_coverage/coverage_state_machine.hpp"
#include "create3_coverage/create3_coverage_node.hpp"

#include "behaviors/utils.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

namespace create3_coverage {

Create3CoverageNode::Create3CoverageNode()
: rclcpp::Node("data_collection")
{
    m_coverage_action_server = rclcpp_action::create_server<CoverageAction>(
        this->get_node_base_interface(),
        this->get_node_clock_interface(),
        this->get_node_logging_interface(),
        this->get_node_waitables_interface(),
        "coverage",
        std::bind(&Create3CoverageNode::handle_goal, this, _1, _2),
        std::bind(&Create3CoverageNode::handle_cancel, this, _1),
        std::bind(&Create3CoverageNode::handle_accepted, this, _1));

    m_wall_follow_action_client = rclcpp_action::create_client<WallFollowAction>(
        this->get_node_base_interface(),
        this->get_node_graph_interface(),
        this->get_node_logging_interface(),
        this->get_node_waitables_interface(),
        "wall_follow");

	m_reset_pos_client = this->create_client<ResetPosSrv>(
														  "reset_pose"
	);
    
    m_cmd_vel_publisher = this->create_publisher<TwistMsg>("cmd_vel", 10);

    m_reflexes_param_client = std::make_shared<rclcpp::AsyncParametersClient>(
        this->get_node_base_interface(),
        this->get_node_topics_interface(),
        this->get_node_graph_interface(),
        this->get_node_services_interface(),
        "motion_control",
        rmw_qos_profile_parameters);

    m_hazards_subscription = this->create_subscription<HazardMsg>(
        "hazard_detection",
        rclcpp::SensorDataQoS(),
        std::bind(&Create3CoverageNode::hazards_callback, this, _1));

    m_ir_opcode_subscription = this->create_subscription<OpCodeMsg>(
        "ir_opcode",
        rclcpp::SensorDataQoS(),
        std::bind(&Create3CoverageNode::ir_opcode_callback, this, _1));

    m_odom_subscription = this->create_subscription<OdometryMsg>(
        "odom",
        rclcpp::SensorDataQoS(),
        std::bind(&Create3CoverageNode::odom_callback, this, _1));

    m_kidnap_subscription = this->create_subscription<KidnapMsg>(
        "kidnap_status",
        rclcpp::SensorDataQoS(),
        std::bind(&Create3CoverageNode::kidnap_callback, this, _1));

    m_ir_intensity_vector_subscription = this->create_subscription<IrIntensityVectorMsg>(
        "ir_intensity",
        rclcpp::SensorDataQoS(),
        std::bind(&Create3CoverageNode::ir_intensity_vector_callback, this, _1));

	m_interface_buttons_subscription = this->create_subscription<InterfaceButtonsMsg>(
		"interface_buttons",
		rclcpp::SensorDataQoS(),
	    std::bind(&Create3CoverageNode::interface_buttons_callback, this, _1));
	
    m_rate_hz = this->declare_parameter<double>("rate_hz", 30);
    m_opcodes_buffer_ms = this->declare_parameter<int>("opcodes_buffer_ms", 200);

    m_is_running = false;
    m_last_behavior = -1;
    m_last_opcodes_cleared_time = this->now();
	m_pose_reset = false;
    RCLCPP_INFO(this->get_logger(), "Node created!");
}

rclcpp_action::GoalResponse
Create3CoverageNode::handle_goal(
    const rclcpp_action::GoalUUID& uuid,
    std::shared_ptr<const CoverageAction::Goal> goal)
{
    (void)uuid;
    (void)goal;

    if (!this->ready_to_start()) {
        RCLCPP_WARN(this->get_logger(), "Rejecting goal request: robot nodes have not been discovered yet");
        return rclcpp_action::GoalResponse::REJECT;
    }

    bool is_kidnapped = false;
    {
        std::lock_guard<std::mutex> guard(m_mutex);
        is_kidnapped = m_last_kidnap.is_kidnapped;
    }
    if (is_kidnapped) {
        RCLCPP_WARN(this->get_logger(), "Rejecting goal request: robot is currently kidnapped");
        return rclcpp_action::GoalResponse::REJECT;
    }

    if (m_is_running.exchange(true)) {
        RCLCPP_WARN(this->get_logger(), "Rejecting goal request: can only handle 1 goal at the time");
        return rclcpp_action::GoalResponse::REJECT;
    }

    RCLCPP_INFO(this->get_logger(), "Accepting goal request");
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse
Create3CoverageNode::handle_cancel(
    const std::shared_ptr<GoalHandleCoverage> goal_handle)
{
    (void)goal_handle;

    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    return rclcpp_action::CancelResponse::ACCEPT;
}

void Create3CoverageNode::handle_accepted(const std::shared_ptr<GoalHandleCoverage> goal_handle)
{
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&Create3CoverageNode::execute, this, _1), goal_handle}.detach();
}

void Create3CoverageNode::execute(const std::shared_ptr<GoalHandleCoverage> goal_handle)
{
    RCLCPP_INFO(this->get_logger(), "Executing goal");

    rclcpp::Rate loop_rate(m_rate_hz);
    const auto goal = goal_handle->get_goal();
    auto start_time = this->now();

    // Check if the robot has reflexes enabled or if we need to manually handle hazards
    bool robot_has_reflexes = this->reflexes_setup();

    auto state_machine = std::make_unique<CoverageStateMachine>(
        *goal,
        this->get_clock(),
        this->get_logger(),
        m_wall_follow_action_client,
        m_cmd_vel_publisher,
        robot_has_reflexes);

    CoverageStateMachine::CoverageOutput output;
    output.state = State::RUNNING;
    bool is_kidnapped = false;
    do {

        Behavior::Data data;
		bool cont = true;
        {
            std::lock_guard<std::mutex> guard(m_mutex);

			cont = m_pose_reset;
            data.hazards = m_last_hazards;
            data.pose = m_last_odom.pose.pose;
			data.twist = m_last_odom.twist.twist;
            data.opcodes = m_last_opcodes;

            if (this->now() - m_last_opcodes_cleared_time >= rclcpp::Duration(std::chrono::milliseconds(m_opcodes_buffer_ms))) {
                m_last_opcodes_cleared_time = this->now();
                m_last_opcodes.clear();
            }

            is_kidnapped = m_last_kidnap.is_kidnapped;
            data.irIntensityVector = m_last_intensity_vector;

			data.interfaceButtons = m_last_interface_buttons;
        }

        // Check if there is a cancel request
        if (goal_handle->is_canceling()) {
            m_is_running = false;
            state_machine->cancel();
            auto result = std::make_shared<CoverageAction::Result>();
            result->success = false;
            result->duration = this->now() - start_time;
            goal_handle->canceled(result);
            RCLCPP_INFO(this->get_logger(), "Goal canceled!");
            return;
        }

        // Check if the robot is kidnapped
        if (is_kidnapped) {
            m_is_running = false;
            state_machine->cancel();
            auto result = std::make_shared<CoverageAction::Result>();
            result->success = false;
            result->duration = this->now() - start_time;
            goal_handle->abort(result);
            RCLCPP_ERROR(this->get_logger(), "Aborting goal! Robot has been kidnapped!");
            return;
        }

        // Run the state machine!
		if (cont) {
        output = state_machine->execute(data);
        if (m_last_behavior != output.current_behavior) {
            auto feedback = std::make_shared<CoverageAction::Feedback>();
            feedback->current_behavior = output.current_behavior;
            goal_handle->publish_feedback(feedback);
            m_last_behavior = output.current_behavior;
        }
		}

        loop_rate.sleep();
    } while (output.state == State::RUNNING && rclcpp::ok());

    RCLCPP_INFO(this->get_logger(), "Coverage action terminated");

    if (rclcpp::ok()) {
        m_is_running = false;
        auto result = std::make_shared<CoverageAction::Result>();
        result->success = (output.state == State::SUCCESS);
        result->duration = this->now() - start_time;
        if (result->success) {
            goal_handle->succeed(result);
        } else {
            goal_handle->abort(result);
        }
    }
}

bool Create3CoverageNode::reflexes_setup()
{
    bool robot_has_reflexes = true;

    const std::vector<std::string> param_names = {
        "reflexes.REFLEX_BUMP",
        "reflexes.REFLEX_CLIFF",
        "reflexes.REFLEX_WHEEL_DROP",
        "reflexes_enabled"
    };

    // Check if reflexes are active
    auto get_params_future = m_reflexes_param_client->get_parameters(param_names);
    auto parameters = get_params_future.get();
    bool all_enabled = true;
    bool all_disabled = true;
    for (const rclcpp::Parameter& param : parameters) {
        all_enabled = all_enabled && param.as_bool();
        all_disabled = all_disabled && !param.as_bool();
    }

    if (all_enabled) {
        robot_has_reflexes = true;
        RCLCPP_INFO(this->get_logger(), "Reflexes are enabled on the robot!");
    } else if (all_disabled) {
        robot_has_reflexes = false;
        RCLCPP_INFO(this->get_logger(), "Reflexes are disabled on the robot!");
    } else {
        // If some reflexes are enabled and some are disabled, activate them all.
        RCLCPP_WARN(this->get_logger(), "Some reflexes were disabled, activating all of them");
        std::vector<rclcpp::Parameter> parameters;
        for (const std::string & name : param_names) {
            parameters.push_back(rclcpp::Parameter(name, true));
        }
        auto set_params_future = m_reflexes_param_client->set_parameters(parameters);
        auto results = set_params_future.get();
        bool success = true;
        for (const rcl_interfaces::msg::SetParametersResult& res : results) {
            success = success && res.successful;
        }

        if (!success) {
            throw std::runtime_error{"Unable to activate required parameters"};
        }
        robot_has_reflexes = true;
    }

    return robot_has_reflexes;
}

bool Create3CoverageNode::ready_to_start()
{

    if (m_hazards_subscription->get_publisher_count() == 0 ||
        m_ir_opcode_subscription->get_publisher_count() == 0 ||
        m_odom_subscription->get_publisher_count() == 0 ||
        m_kidnap_subscription->get_publisher_count() == 0 ||
        m_ir_intensity_vector_subscription->get_publisher_count() == 0 ||
		m_interface_buttons_subscription->get_publisher_count() == 0)
    {
        RCLCPP_WARN(this->get_logger(), "Some subscriptions haven't discovered their publishers yet");
        return false;
    }

    if (m_cmd_vel_publisher->get_subscription_count() == 0) {
        RCLCPP_WARN(this->get_logger(), "Some publishers haven't discovered their subscriptions yet");
        return false;
    }

    if (!m_reflexes_param_client->service_is_ready()) {
        RCLCPP_WARN(this->get_logger(), "Some parameters servers are not ready yet");
        return false;
    }

    if (!m_wall_follow_action_client->action_server_is_ready()) {
        RCLCPP_WARN(this->get_logger(), "Some actions servers are not ready yet");
        return false;
    }

	if (!m_reset_pos_client->wait_for_service(std::chrono::duration< int64_t,  std::milli >(1000)))
		{
			RCLCPP_WARN(this->get_logger(), "Some services are not yet ready yet");
			return false;
		}

	auto request = std::make_shared<ResetPosSrv::Request>();
	request->pose.position.x = 0;
	request->pose.position.y = 0;
	request->pose.position.z = 0;
	auto result = m_reset_pos_client->async_send_request(request, std::bind(&Create3CoverageNode::reset_pose_callback, this, _1));
	RCLCPP_INFO(this->get_logger(), "Sent request to reset pose!");
    return true;
}

void Create3CoverageNode::hazards_callback(HazardMsg::ConstSharedPtr msg)
{
    std::lock_guard<std::mutex> guard(m_mutex);
    m_last_hazards = *msg;
}

void Create3CoverageNode::ir_opcode_callback(OpCodeMsg::ConstSharedPtr msg)
{
    std::lock_guard<std::mutex> guard(m_mutex);
    m_last_opcodes.push_back(*msg);
}

void Create3CoverageNode::kidnap_callback(KidnapMsg::ConstSharedPtr msg)
{
    std::lock_guard<std::mutex> guard(m_mutex);
    m_last_kidnap = *msg;
}

void Create3CoverageNode::odom_callback(OdometryMsg::ConstSharedPtr msg)
{
    std::lock_guard<std::mutex> guard(m_mutex);
    m_last_odom = *msg;
}

void Create3CoverageNode::ir_intensity_vector_callback(IrIntensityVectorMsg::ConstSharedPtr msg)
{
    std::lock_guard<std::mutex> guard(m_mutex);
    m_last_intensity_vector = *msg;
}

void Create3CoverageNode::interface_buttons_callback(InterfaceButtonsMsg::ConstSharedPtr msg)
{
	std::lock_guard<std::mutex> guard(m_mutex);
	m_last_interface_buttons = *msg;
}

void Create3CoverageNode::reset_pose_callback(const rclcpp::Client<ResetPosSrv>::SharedFuture future) {
	std::lock_guard<std::mutex> guard(m_mutex);
	m_pose_reset = true;
}

} // namespace create3_coverage
