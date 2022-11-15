# Data collection

This code collects data for our Bayesian network. This is mainly in `data_collection` but it also uses the
`create_examples_msgs` files. The `data_collection` is adapted from `../../../create3_coverage/`.

### How to use

Build this and the `../../../ros2_ws/` packages. The `ros2_ws` includes the irobot_create_msgs.
Source the setup shell scripts.

Start the two nodes with the following command:

```bash
ros2 run data_collection data_collection
```

In a separate terminal command, you can issue commands to the two different nodes by issuing one of:

* Wall follow: Specify the time to perform the wall following, here 10 seconds and 0 nanoseconds. Also specify what side the robot should wall follow (1 for left and -1 for right): here 1 == left
```bash
ros2 action send_goal /coverage create3_examples_msgs/action/WallFollow "{max_runtime: {sec: 300, nanosec: 0}, max_wall_follow_runtime: {sec: 10, nanosec: 0}, wall_follow_side: 1, print_duration: {sec: 0, nanosec: 10000000}}
```

* Rotate: Specify the angle in radians, here 1.57 radians ~= 180 degrees
```bash
ros2 action send_goal /rotate create3_examples_msgs/action/Rotate "{max_runtime: {sec: 300, nanosec: 0}, angle: 1.57, print_duration: {sec: 0, nanosec: 10000000}}"
```

### Robot initial configuration

**NOTES:**
 - Do not start the behavior with the robot undocked, but very close to the dock. The behavior may fail or it may cause the robot to run over its dock.
 - Do not start the behavior with the robot in contact with obstacles or cliffs.
 - Do not start the behavior with the robot docked.


### Troubleshooting

##### `Waiting for an action server to become available...`

If users notice that they are unable to communicate with the coverage action server when using Fast-DDS RMW, this is due to the following bug https://github.com/ros2/rmw_fastrtps/issues/563.
A simple fix consists in updating the `rwm_fastrtps_cpp` library to a version >= 5.0.1
