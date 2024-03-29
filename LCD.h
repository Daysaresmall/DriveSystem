#pragma config(Sensor, in1,    xAccel,         sensorAccelerometer)
#pragma config(Sensor, in2,    yAccel,         sensorAccelerometer)
#pragma config(Motor,  port2,           frontRight,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           backRight,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           frontLeft,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           backLeft,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int page = 0;//Different Pages for the LCD
int Program = 0;//Runs the Main Code
int left = 1;//LCD Left Button
int center = 2;//LCD Center Button
int right = 4;//LCD Right Button

/////
// LCD Void
/////
void LCD()
{
	/* User Control Menu */
	while (page == 0) 
	{
		clearLCDLine(0);
		clearLCDLine(1);

		displayLCDCenteredString(0, "User Control");
		displayLCDCenteredString(1, "<   Select   >");

		if (nLCDButtons == left)
		{
			page = 2;
		}
		else if (nLCDButtons == right)
		{
			page = 1;
		}
		else if (nLCDButtons == center)
		{
			Program = 1;
		}
	}

	/* Autonomous Menu */
	while (page == 1)
	{
		clearLCDLine(0);
		clearLCDLine(1);

		displayLCDCenteredString(0, "Autonomous");
		displayLCDCenteredString(1, "<   Select   >");

		if (nLCDButtons == left)
		{
			page = 0;
		}
		else if (nLCDButtons == right)
		{
			page = 2;
		}
		else if (nLCDButtons == center)
		{
			Program = 2;
		}
	}
	
	/* Testing Menu */
	while (page == 2)
	{
		clearLCDLine(0);
		clearLCDLine(1);

		displayLCDCenteredString(0, "Test");
		displayLCDCenteredString(1, "<   Select   >");
		
		if (nLCDButtons == left)
		{
			page = 1;
		}
		
		else if (nLCDButtons == right)
		{
			page = 0;
		}
		
		else if (nLCDButtons == center)
		{
			Program = 3;
		}
	}
}
