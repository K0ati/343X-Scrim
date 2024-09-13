#pragma once

#include "pros/rtos.hpp"
#include "lemlib/api.hpp"

// . . .
// 
//  DRIVER CONTROL
//
// . . .

bool getShiftKey();

void tank_drive(double curve = 6.0);
void set_drive_to_coast();
void set_drive_to_hold();
void function_clampout();
void hold_clamp();
void determine_intake_direction();
void determine_shift_status();