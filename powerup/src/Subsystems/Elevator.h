// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ELEVATOR_H
#define ELEVATOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Elevator: public frc::Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<WPI_TalonSRX> elevatorMotor;
	std::shared_ptr<frc::DigitalInput> vaultPosSwitch;
	std::shared_ptr<frc::DigitalInput> lowSwitchPosSwitch;
	std::shared_ptr<frc::DigitalInput> highSwitchPosSwitch;
	std::shared_ptr<frc::DigitalInput> lowScalePosSwitch;
	std::shared_ptr<frc::DigitalInput> highScalePosSwitch;
	std::shared_ptr<frc::DigitalInput> liftPointPosSwitch;
	std::shared_ptr<frc::AnalogPotentiometer> position_pot;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	Elevator();
	void InitDefaultCommand() override;
	void Periodic() override;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
