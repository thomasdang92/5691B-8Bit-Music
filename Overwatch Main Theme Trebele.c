
#pragma platform(VEX2)
#pragma competitionControl(Competition)
#include "Vex_Competition_Includes.c"


void pre_auton()
{
  bStopTasksBetweenModes = true;
}

task autonomous()
{
  //Tempo = 120 BPM
	//Dotted Half Note = 1500
	//Half Note = 1000
	//Dotted Quarter = 750
	//Quarter Note = 500
	//Eighth Note = 250
	//16th Note = 125


//1st Measure
	playTone(440, 148);							wait1Msec(1500);							//A, Dotted Half Note
	playTone(329.6276, 23);					wait1Msec(250);								//E, Eighth Note
	playTone(440, 23);							wait1Msec(250);								//A, Eighth Note

//2nd Measure
	playTone(493.8833, 148);				wait1Msec(1500);							//B, Dotted Half Note
	playTone(329.6276, 23);					wait1Msec(250);								//E, Eighth Note
	playTone(493.8833, 23);					wait1Msec(250);								//B, Eighth Note

//3rd Measure
	playTone(554.3653, 50);					wait1Msec(500);								//C#, Quarter Note
	playTone(220, 25);							wait1Msec(250);								//A (LOW), Eighth Note
	playTone(293.6648, 25);					wait1Msec(250);								//D, Eighth Note
	playTone(329.6276, 100);				wait1Msec(1000);							//E, Half Note

//4th Measure
	playTone(554.3653, 100);				wait1Msec(1000);							//C#, Half Note
	wait1Msec(250);																								//Eigth Rest
	playTone(440, 10.);							wait1Msec(125);								//A, 16th Note
	playTone(554.3653, 10);					wait1Msec(125);								//C#, 16th Note
	playTone(329.6276, 10);					wait1Msec(125);								//E, 16th Note
	playTone(880, 10);							wait1Msec(125);								//A(High), 16th Note
	playTone(1108.731, 10);					wait1Msec(125);								//C#(High), 16th Note
	playTone(1760, 10);							wait1Msec(125);								//A(High AF), 16th Note

//5th Measure

	playTone(783.9909, 73);					wait1Msec(750);								//G, Dotted Quarter Note
	playTone(739.9888, 10.5);				wait1Msec(125);								//F#, 16th Note
	playTone(659.2551, 10.5);				wait1Msec(125);								//E, 16th Note
	playTone(739.9888, 48);					wait1Msec(500);								//F#, Quarter Note
	playTone(587.3295, 48);					wait1Msec(500);								//D, Quarter Note

//6th Measure
	playTone(659.2551, 148);				wait1Msec(1500);							//E, Dotted Half Note
	playTone(587.3295, 48);					wait1Msec(500);								//D, Quarter Note

//7th Measure
	playTone(587.3295, 23);					wait1Msec(250);								//D, Eighth Note
	playTone(554.3653, 148);				wait1Msec(1500);							//C#, Dotted Half Note
}


task usercontrol()
{
}
