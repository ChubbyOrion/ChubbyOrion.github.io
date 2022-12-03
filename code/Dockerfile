FROM osrf/ros:galactic-desktop

RUN apt update && apt upgrade -y
RUN ./ros_entrypoint.sh
WORKDIR /home

RUN git clone https://github.com/iRobotEducation/create3_examples.git



RUN rosdep install --from-path create3_examples/ --ignore-src -yi
RUN /bin/bash -c "source /opt/ros/galactic/setup.bash; colcon build; apt install -y python3-pip; pip install pomegranate numpy data-collection;"

ENTRYPOINT /bin/bash -c "source /opt/ros/galactic/setup.bash; source /home/install/local_setup.bash; exec /bin/bash"