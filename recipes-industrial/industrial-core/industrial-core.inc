SRC_URI = "https://github.com/ros-industrial/${ROS_SPN}/archive/${PV}.tar.gz;downloadfilename=${ROS_SP}.tar.gz"
SRC_URI[md5sum] = "9dad964b2d8c661dd7afac9f0ff7e7ef"
SRC_URI[sha256sum] = "02c8ecaec1ea6b84bdecdd6c42a44a76ffb1e9b5d1bbdb72469b3a2b3c92a12e"

S = "${WORKDIR}/${ROS_SP}/${ROS_BPN}"

inherit catkin

ROS_SPN = "industrial_core"
