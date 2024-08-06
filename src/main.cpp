#include "robot.hpp"
#include "kinematics.hpp"
#include "dynamics.hpp"
#include "path_planning.hpp"
#include "control.hpp"
#include "visualization.hpp"
#include "collision_detection.hpp"

int main()
{
    Robot robot;
    Kinematics kinematics;
    Dynamics dynamics;
    PathPlanning path_planning;
    Control control;
    Visualization visualization;
    CollisionDetection collision_detection;

    robot.initialize();
    kinematics.computeTransformationMatrix(robot.getJointPositions());
    kinematics.computeJacobianMatrix(robot.getJointPositions());
    dynamics.updateDynamics();
    path_planning.planPath();
    control.applyControlInputs(robot);
    visualization.render(robot);
    collision_detection.checkCollision(robot);

    return 0;
}