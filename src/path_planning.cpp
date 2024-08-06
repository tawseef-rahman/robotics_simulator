#include "path_planning.hpp"
#include <iostream>

void PathPlanning::planPath()
{
    std::cout << "Planning path for the robot" << std::endl;
    computeOptimalPath();
}

void PathPlanning::computeOptimalPath()
{
    std::cout << "Computing optimal path" << std::endl;
}