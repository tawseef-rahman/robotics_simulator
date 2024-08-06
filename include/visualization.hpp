#ifndef VISUALIZATION_HPP
#define VISUALIZATION_HPP

#include "robot.hpp"

class Visualization
{
public:
    void render(const Robot &robot) const;

private:
    void drawRobot(const Robot &robot) const;
    void drawAxis() const;
};

#endif // VISUALIZATION_HPP