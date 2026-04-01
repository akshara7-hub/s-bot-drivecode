#include "main.h"
#include "pros/motor_group.hpp"
#include "lemlib/api.hpp"

extern pros::MotorGroup leftMotors;
extern pros::MotorGroup rightMotors;
extern pros::Controller master;
extern lemlib::Drivetrain drivetrain;
extern lemlib::Chassis chassis;
extern pros::adi::AnalogOut piston;
extern pros::Controller controller;
extern pros::adi::AnalogOut matchloader;

extern pros::Motor scoringMotor;
extern pros::adi::Pneumatics::DigitalOut lowGoalPiston;