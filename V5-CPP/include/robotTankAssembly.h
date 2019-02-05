#ifndef ROBOT_TANK_ASSEMBLY_H
#define ROBOT_TANK_ASSEMBLY_H

#include "teamColor.h"
#include "direction.h"

class RobotTankAssembly {
public:
    void moveBase(double speed, Direction direction);
    void moveLeftSide(double speed, Direction direction);
    void moveRightSide(double speed, Direction direction);

    // Speed values in rangee +- 127 for joysticks
    void moveLeftSide(double speed);
    void moveRightSide(double speed);

    // Mainly used by autonomous sequences
    void moveByTile(double speed, Direction direction);
    void rotateBaseOfAngle(double angle);
};

#endif
