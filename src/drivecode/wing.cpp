#include "drivecode/wing.hpp"
#include "drivecode/objects.hpp"
#include "pros/misc.h"

pros::adi::AnalogOut wing('A');

static bool wingExtended = false;
static bool prevButtonState = false;

void updateWing(){
    bool button = controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2);

    if (button && !prevButtonState) {
        wingExtended = !wingExtended;
        wing.set_value(wingExtended);
    }

    prevButtonState = button;
}