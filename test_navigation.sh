#!/bin/sh
#xterm  -e  " roslaunch turtlebot_gazebo turtlebot_world.launch world_file:=~/catkin_ws/src/world/wall_room.world" &
xterm  -e  " roslaunch turtlebot_gazebo turtlebot_world.launch " &
sleep 15
#xterm  -e  " roslaunch turtlebot_gazebo amcl_demo.launch map_file:=~catkin_ws/src/map/wall_room.yaml " &
xterm  -e  " roslaunch turtlebot_gazebo amcl_demo.launch " &
sleep 10
xterm  -e  " roslaunch turtlebot_rviz_launchers view_navigation.launch"