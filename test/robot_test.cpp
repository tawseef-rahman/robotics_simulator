#include "robot.hpp"
#include <cassert>
#include <iostream>

void testRobotInitialization()
{
    Robot robot;
    robot.initialize();
    std::vector<double> expected_positions(6, 0.0);
    assert(robot.getJointPositions() == expected_positions);
    std::cout << "testRobotInitialization passed." << std::endl;
}

void testRobotSetGetJointPositions()
{
    Robot robot;
    std::vector<double> test_positions = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    robot.setJointPositions(test_positions);
    assert(robot.getJointPositions() == test_positions);
    std::cout << "testRobotSetGetJointPositions passed." << std::endl;
}

int main()
{
    testRobotInitialization();
    testRobotSetGetJointPositions();
    return 0;
}