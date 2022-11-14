import subprocess

LEFT = 1
RIGHT = -1

def wall_follow(max_runtime_sec, max_runtime_nanosec, max_wall_follow_runtime_sec, max_wall_follow_runtime_nanosec, wall_follow_side, print_duration_sec, print_duration_nanosec):
    cmd = "ros2 action send_goal /coverage create3_examples_msgs/action/WallFollow \"{{max_runtime:{{sec: {},nanosec: {}}}, max_wall_follow_runtime:{{sec: {}, nanosec: {}}}, wall_follow_side: {}, print_duration: {{sec: {}, nanosec: {}}}}}\"".format(max_runtime_sec, max_runtime_nanosec, max_wall_follow_runtime_sec, max_wall_follow_runtime_nanosec, wall_follow_side, print_duration_sec, print_duration_nanosec)

    print("CMD: {}".format(cmd))
    proc = subprocess.Popen(
        rf"""{cmd}""",
        stderr=subprocess.DEVNULL, stdout=subprocess.PIPE, shell=True, encoding='utf-8')
    return proc

def rotate(max_runtime_sec, max_runtime_nanosec, angle_radians, print_duration_sec, print_duration_nanosec):
    cmd = "ros2 action send_goal /rotate create3_examples_msgs/action/Rotate \"{{max_runtime:{{sec: {}, nanosec: {}}}, angle: {}, print_duration: {{sec: {}, nanosec: {}}}}}\"".format(max_runtime_sec, max_runtime_nanosec, angle_radians, print_duration_sec, print_duration_nanosec)

    print("CMD: {}".format(cmd))
    proc = subprocess.run(
        rf"""{cmd}""",
        stderr=subprocess.DEVNULL, stdout=subprocess.PIPE, shell=True, encoding='utf-8')
    return proc

if __name__ == "__main__":
    proc = rotate(3600, 0, 1.57, 0, 10000000)
    print(proc.returncode)
    print(proc.args)
