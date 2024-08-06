#include "collision_detection.hpp"
#include <iostream>
#include <vector>

bool CollisionDetection::checkCollision(const Robot &robot) const
{
    bool collision = detectCollision(robot);
    if (collision)
    {
        std::cout << "Collision detected!" << std::endl;
    }
    else
    {
        std::cout << "No collision detected." << std::endl;
    }
    return collision;
}

bool CollisionDetection::detectCollision(const Robot &robot) const
{
    // Simplified collision detection: Check if any joint angle exceeds limits
    auto positions = robot.getJointPositions();
    for (const auto &pos : positions)
    {
        if (pos < -M_PI || pos > M_PI)
        {
            return true; // Collision detected
        }
    }
    return false; // No collision
}