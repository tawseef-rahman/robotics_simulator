#include "dynamics.hpp"
#include <iostream>

void Dynamics::updateDynamics()
{
    std::cout << "Updating dynamics of the robot" << std::endl;
    computeForcesAndTorques();
}

void Dynamics::computeForcesAndTorques()
{
    // Placeholder for forces and torques calculation
    std::cout << "Computing forces and torques" << std::endl;
}