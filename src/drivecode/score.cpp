#include "drivecode/score.hpp"
#include "drivecode/objects.hpp"

static bool scoreOn =false;
static bool scorePrevious = false;

void updateScoring() {
    bool button = controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1);

    if (button&& !scorePrevious) {
        scoreOn = !scoreOn;
        scoringMotor.move_velocity(600);
    }

    scorePrevious = button;
}

static bool midgoalOn = false;
static bool midPrev = false;

void updateMidgoal(){

    bool button = controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2);
    
    if (button && !midPrev) {
        midgoalOn = !midgoalOn;
        scoringMotor.move_velocity(-600);
    }
    
    midPrev = button;
}

static bool lowgoalOn = false;
static bool lowPrev =false;

void updateLowgoal(){
    bool button = controller.get_digital(pros::E_CONTROLLER_DIGITAL_B);

    if (button && !lowPrev) {
        lowgoalOn = !lowgoalOn;

        if (lowgoalOn) {
            scoringMotor.move_velocity(-600);
            lowGoalPiston.set_value(true);
        }
        else {
            scoringMotor.move_velocity(0);
            lowGoalPiston.set_value(false);
        }

        lowPrev = button;
    }
}

//hello hello