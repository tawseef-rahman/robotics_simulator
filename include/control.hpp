#ifndef CONTROL_HPP
#define CONTROL_HPP

#include "robot.hpp"

class Control
{
public:
    void applyControlInputs(Robot &robot);

private:
    void adjustJointPositions(Robot &robot);
};

#endif // CONTROL_HPP