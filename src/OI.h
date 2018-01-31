// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	
	
	
	
	
	std::shared_ptr<frc::Joystick> f310;
	std::shared_ptr<frc::JoystickButton> button_b;
	std::shared_ptr<frc::JoystickButton> button_A;
	std::shared_ptr<frc::Joystick> xbox;
	std::shared_ptr<frc::JoystickButton> square;
	std::shared_ptr<frc::JoystickButton> circle;
	std::shared_ptr<frc::Joystick> joystick;
	std::shared_ptr<frc::JoystickButton> button_thumb;
	std::shared_ptr<frc::JoystickButton> trigger;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	OI();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<frc::Joystick> getJoystick();
	std::shared_ptr<frc::Joystick> getXbox();
	std::shared_ptr<frc::Joystick> getF310();
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};

#endif