#pragma config(Sensor, in1,    xAccel,         sensorAccelerometer)
#pragma config(Sensor, in2,    yAccel,         sensorAccelerometer)
#pragma config(Motor,  port2,           frontRight,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           backRight,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           frontLeft,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           backLeft,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*/////////////////// ++ Notes ++ /////////////////////

++ CONTROLS ++
Right Joystick Y                       Forward/Backward
Right Joystick C                       Left/Right
Left Joystick X                        Strafe Left/Right
All 3 LCD Buttons                      Back to LCD Main Menu

++PROGRMMING NOTES++
- Program 0 - LCD Main Menu
- Program 1 - User
- Program 2 - Auton
- Program 3 - Test

*//////////////////// ++ Notes ++ /////////////////////

/* Includes */
#include "LCD.h";
#include "userControl.h";
#include "Auton.h";

void mainMenu()
{
	if (nLCDButtons == 7)
	{
		Program = 0;
	}
}

task main()
{
	///////
	// LCD CODE
	///////
	while (Program == 0)
	{
		LCD();
	}

	///////
	// USER CONTROL CODE
	///////
	while(Program == 1)
	{
		/* LCD Display */
		clearLCDLine(0);
		clearLCDLine(1);
		displayLCDCenteredString(0, "- Running -");
		displayLCDCenteredString(1, "User Control");

		/* Back to Main Menu */
		mainMenu();

		/* User Control File */
		userControl();
	}

	///////
	// AUTONOMOUS CODE
	///////
	while(Program == 2)
	{
		/* LCD Display */
		clearLCDLine(0);
		clearLCDLine(1);
		displayLCDCenteredString(0, "- Running -");
		displayLCDCenteredString(1, "Autonomous");

		/* Back to Main Menu */
		mainMenu();

		/* Auton File */
		Auton();

	}
	
	///////
	// TEST CODE
	///////
	while (Program == 3)
	{
		/* LCD Display */
		clearLCDLine(0);
		clearLCDLine(1);
		displayLCDCenteredString(0, "- Running -");
		displayLCDCenteredString(1, "Test");

		/* Back to Main Menu */
		mainMenu();

		/* Test Code Goes Here */
		
		// Instead of making a new program to test
		// (eg. variables) for the robot, that code
		// would go here

	}
}
