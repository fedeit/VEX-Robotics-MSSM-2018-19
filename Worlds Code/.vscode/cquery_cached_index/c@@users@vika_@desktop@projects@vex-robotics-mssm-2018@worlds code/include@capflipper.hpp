#ifndef _ROBOT_CAP_FLIPPER_HPP_
#define _ROBOT_CAP_FLIPPER_HPP_

#include "direction.hpp"
#include "api.h"

using namespace pros;

class CapFlipper {
private:
  Motor motor = Motor(5, E_MOTOR_GEARSET_36, false, E_MOTOR_ENCODER_DEGREES);
public:
  void spin(Direction dir);
  void stop();
};

#endif
