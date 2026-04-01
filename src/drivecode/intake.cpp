#include "drivecode/intake.hpp"
#include "drivecode/objects.hpp"

pros::Motor intake(0);

bool intakeOn = false;
bool outtakeOn = false;
int lastr1=0;
int lastr2= 0;
int r1 = 0;
int r2=0;


void updateIntake() {
    r1=master.get_digital(pros::E_CONTROLLER_DIGITAL_R1);
    r2=master.get_digital(pros::E_CONTROLLER_DIGITAL_R2);

    if (r1==1){
        intakeOn = !intakeOn;
        outtakeOn=false;
    }

    if (r2==1){
        outtakeOn = !outtakeOn;
        intakeOn=false;
    }

    if (intakeOn){
        intake.move_velocity(600); //need to know how much voltage further
    }

    else if (outtakeOn) {
        intake.move_velocity(-600); //need to know how much voltage backwards, negative of forwards amount
    }
    else {
        intake.move_velocity(0);
    }

    lastr1=r1;
    lastr2=r2;
}
