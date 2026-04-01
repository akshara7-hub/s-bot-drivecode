#include "main.h"
#include "objects.hpp"
#include "pros/adi.hpp"

extern pros::adi::AnalogOut matchloader;
extern bool buttonOn;
extern int matchloaderWhere;

void updateMatchloader();