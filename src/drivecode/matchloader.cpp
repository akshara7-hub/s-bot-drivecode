#include "drivecode/matchloader.hpp"
#include "drivecode/objects.hpp"

bool buttonOn = false;
int matchloaderWhere=0;

void updateMatchloader(){
    bool pressed = master.get_digital(pros::E_CONTROLLER_DIGITAL_UP);

    if (pressed && !buttonOn) {
        matchloaderWhere=!matchloaderWhere;

    }

    buttonOn = true;

    if (matchloaderWhere==1) {
        matchloader.set_value(true);
    } 
    else {
        matchloader.set_value(false);
    }

}
