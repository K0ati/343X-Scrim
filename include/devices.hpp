#pragma once

#include "main.h"
#include "lemlib/api.hpp"

extern pros::Controller master;

extern pros::Motor intake;
extern pros::Motor intake2;

extern pros::Motor rightFront;
extern pros::Motor rightBack;
extern pros::Motor rightTop;

extern pros::Motor leftFront;
extern pros::Motor leftBack;
extern pros::Motor leftTop;

extern pros::ADIDigitalOut mogoClamp;

extern bool clampOut;
extern bool shiftKey;
extern bool intakeDirection;

extern lemlib::Chassis chassis;

extern Drive EzTempChassis;

void checkDTMotorsAndReturnTemperature();
void checkOtherMotorsAndReturnTemperature();
void calibrateBothChassis(bool isLemLib = false);
void ezTempChassisInits();
void functionClampOut();
void runIntake();
void functionShiftKey();

// Change Pneumatic, Motor Names, Motor Temp name
