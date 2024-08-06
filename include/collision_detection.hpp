#ifndef COLLISION_DETECTION_HPP
#define COLLISION_DETECTION_HPP

#include "robot.hpp"

class CollisionDetection
{
public:
    bool checkCollision(const Robot &robot) const;

private:
    bool detectCollision(const Robot &robot) const;
};

#endif // COLLISION_DETECTION_HPP