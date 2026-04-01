#include "drivecode/objects.hpp"
#include "pros/misc.h"


pros::MotorGroup left_motors({0,0,0});
pros::MotorGroup right_motors({0,0,0});
pros::Controller controller(pros::E_CONTROLLER_MASTER);
lemlib::Drivetrain drivetrain(&left_motors,&right_motors,0,0,0,0);


pros::adi::AnalogOut matchloader('A');
lemlib::ControllerSettings lateralController(0,0,0,0,0,0,0,0,0);
lemlib::ControllerSettings angularController(0,0,0,0,0,0,0,0,0);
lemlib::OdomSensors sensors(nullptr, nullptr,nullptr,nullptr,nullptr);

lemlib::Chassis chassis(drivetrain, lateralController, angularController,sensors);

pros::Motor scoringMotor(10, pros::E_MOTOR_GEARSET_06, false);
pros::adi::DigitalOut lowGoalPiston('B');

