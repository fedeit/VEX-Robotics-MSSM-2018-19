// TODO:
  // Move to header file?
  // Move to c++ - to extract constant tuples as funcs vars (for controller's identifiers)

//
//  settings.c
//
//  This file contains all the settings for the vehicle
//  Created by Federico Galbiati and Alex Nikanov on 10/11/2018.
//

// Motors ports assignments
// Ball shooter system
const int shooterMotor = 2;
// Claw lift system
const int clawLiftBottomLeft = 5;
const int clawLiftBottomRight = 6;
const int clawLiftTopLeft = 7;
const int clawLiftTopRight = 8;
// Claw control motors: extension and flipping
const int clawExtendMotor = 9;
const int clawFlipMotor = 10;
// Base movement wheel motors
const short rightDrivingWheel = 3;
const short leftDrivingWheel = 4;
// controllers assignments
const int joystickId = 1;
const int liftGroup = 5;
const int clawGroup = 7;
const int slingGroup = 6;