#include "main.h"

// motors
pros::Motor intake11W(8,pros::v5::MotorGears::blue);
pros::Motor lb(11,pros::v5::MotorGears::red, pros::v5::MotorUnits::counts);

//pneumatics
pros::adi::Pneumatics Clamp1('A',true);
pros::adi::Pneumatics Doinker1('B',false);