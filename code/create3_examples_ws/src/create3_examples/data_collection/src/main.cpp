// Copyright 2021 iRobot Corporation. All Rights Reserved.

#include <memory>

#include "create3_coverage/create3_coverage_node.hpp"
#include "create3_coverage/rotate_node.hpp"
#include "rclcpp/rclcpp.hpp"

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto wallFollowNode = std::make_shared<create3_coverage::Create3CoverageNode>();
	auto rotateNode = std::make_shared<create3_coverage::RotateNode>();
	rclcpp::executors::MultiThreadedExecutor executor;
	executor.add_node(wallFollowNode);
	executor.add_node(rotateNode);
    executor.spin();
	rclcpp::shutdown();

    return 0;
}
