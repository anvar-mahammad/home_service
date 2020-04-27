HomeService Robot:

The goal of this excercise is to build a robot that picks up and delivers object for given goal positions.

To be able to do this we used the following packages:

Turtlebot Simulator:
Package for a pre-build robot that is equpped with and RGB-D camera that helps it to sense distanced which useful in mapping.

Gmapping:
Package that creates 2-D occupancy grid maps. It creates a grid map and uses the laser sensor to determine if it is occupied or not

AMCL Localisation:
Included isnide Turtlebot package, adaptive monte carlo localisation algorithm that helps to localise the robot with use of point clouds

Wall-Follower:
Uses laser sensor to recognise obstavles and hence walls. Follows the walls to get the map of the are together with gmapping.

Move_Base:
Path planning (using Dijkstra's algorithm) and execution node that receives the goal coordinates and takes the robot there. 



