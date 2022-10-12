# Data collection

This code collects data for our Bayesian network. This is mainly in `data_collection` but it also uses the
`create_examples_msgs` files. The `data_collection` is adapted from `../../../create3_coverage/`.

### How to use

Build this and the `../../../ros2_ws/` packages. The `ros2_ws` includes the irobot_create_msgs.
Source the setup shell scripts.

Start the coverage action server

```bash
ros2 run data_collection data_collection
```

In a separate terminal command a data collection

```bash
ros2 action send_goal /coverage create3_examples_msgs/action/Coverage "{max_runtime:{sec: 3600,nanosec: 0}, max_wall_follow_runtime:{sec: 20, nanosec: 0}, wall_follow_side: 1, print_duration: {sec: 0, nanosec: 10000000}}"
```

The configuration is in `max_runtime` for the maximum runtime to have. The `max_wall_follow_runtime` determines how long to follow the wall. `wall_follow_side` is the same variable as the normal wall follow action argument except 0 has special meaning for debugging. `print_duration` is a duration to use when printing the collected sensor values.

### Robot initial configuration

**NOTES:**
 - Do not start the behavior with the robot undocked, but very close to the dock. The behavior may fail or it may cause the robot to run over its dock.
 - Do not start the behavior with the robot in contact with obstacles or cliffs.
 - Do not start the behavior with the robot docked.


### Troubleshooting

##### `Waiting for an action server to become available...`

If users notice that they are unable to communicate with the coverage action server when using Fast-DDS RMW, this is due to the following bug https://github.com/ros2/rmw_fastrtps/issues/563.
A simple fix consists in updating the `rwm_fastrtps_cpp` library to a version >= 5.0.1
