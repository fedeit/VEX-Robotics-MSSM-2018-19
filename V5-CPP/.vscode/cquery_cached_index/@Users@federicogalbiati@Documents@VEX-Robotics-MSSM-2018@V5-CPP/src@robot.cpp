#include "robot.h"

Robot::Robot() {
    runDisplaySetup();
}

void Robot::runAutonomous() {
    AutonomousSequence autoSequence = AutonomousSequence(startPos, teamColor);
}

void Robot::runManual() {
    while (true) {
        // read joystick movements
        // read buttons pressed
        // Do we want to create a controller class that has logs buttons pressed
        // and has call back functions on the hardware instance vars of the robot?

        pros::delay(20);
    }
}

void Robot::runDisplaySetup() {
    teamColor = brainDisplay.chooseTeamColor();
    startPos = brainDisplay.chooseStartingTile();
}
