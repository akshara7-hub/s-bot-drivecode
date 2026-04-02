#include "main.h"
#include "drivecode/objects.hpp"
#include "pros/misc.h"

bool trapdoorState=false;

void updateTrapdoor(){
    static bool lastButton=false;
    bool currentButton =controller.get_digital(pros::E_CONTROLLER_DIGITAL_A);

    if (currentButton && !lastButton) {
        trapdoorState = !trapdoorState;
    }

    lastButton=currentButton;
    trapdoor.set_value(trapdoorState);
}

