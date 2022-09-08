
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
	//whole = 2000
	//Dotted Half Note = 1500
	//Half Note = 1000
	//Dotted Quarter Note = 750
	//quarter = 500
	//eight = 250
	//16th Note = 125

//1st Measure
	playTone(220,73);							wait1Msec(750);							//A (LOW), Dotted Quarter Note
	playTone(220,10.5);						wait1Msec(125);							//A (LOW), 16th Note
	playTone(220,10.5);						wait1Msec(125);							//A (LOW), 16th Note
	playTone(220,23);							wait1Msec(250);							//A (LOW), Eighth Note
	playTone(220,23);							wait1Msec(250);							//A (LOW), Eighth Note
	wait1Msec(500);																						//Quarter Rest

//2nd Meaure
	playTone(220,73);							wait1Msec(750);							//A (LOW), Dotted Quarter Note
	playTone(220,10.5);						wait1Msec(125);							//A (LOW), 16th Note
	playTone(220,10.5);						wait1Msec(125);							//A (LOW), 16th Note
	playTone(220,23);							wait1Msec(250);							//A (LOW), Eighth Note
	playTone(220,23);							wait1Msec(250);							//A (LOW), Eighth Note
	wait1Msec(500);																						//Quarter Rest

//3rd Measure
	playTone(220,73);							wait1Msec(750);							//A (LOW), Dotted Quarter Noteg9komobf
	playTone(220,10.5);						wait1Msec(125);							//A (LOW), 16th Note
	playTone(220,10.5);						wait1Msec(125);							//A (LOW), 16th Note
	playTone(220,23);							wait1Msec(250);							//A (LOW), Eighth Note
	playTone(220,23);							wait1Msec(250);							//A (LOW), Eighth Note
	wait1Msec(250);																						//Eighth Rest
	playTone(110,10.5);						wait1Msec(125);							//A (LOW AF), 16th Note
	playTone(110,10.5);						wait1Msec(125);							//A (LOW AF), 16th Note

//4th Measure
	playTone(110,23);							wait1Msec(250);							//A (LOW AF), Eighth Note
	playTone(110,148);						wait1Msec(1500);						//A (LOW AF), Dotted Quarter Note
	wait1Msec(250);																						//Eighth Rest

//5th Measure
	playTone(246.9417,23);				wait1Msec(250);							//B (LOW), Eighth Note
	playTone(220,23);							wait1Msec(250);							//A (LOW), Eighth Note
	playTone(293.6648,23);				wait1Msec(250);							//D (LOW), Eighth Note
	playTone(277.1826,23);				wait1Msec(250);							//C# (LOW), Eighth Note
	playTone(246.9417,23);				wait1Msec(250);							//B (LOW), Eighth Note
	playTone(220,23);							wait1Msec(250);							//A (LOW), Eighth Note
//5.5 Measure - 6th Measure
	playTone(277.1826,195);				wait1Msec(2000);						//C# (LOW), Quarter Note Tied to Dotted Half Note
	playTone(369.9944,48);				wait1Msec(500);							//F# (LOW), Eighth Note

//7th Meausre
	playTone(277.1826,73);				wait1Msec(750);							//C# (LOW), Dotted Quarter Note
	playTone(110,10.5);						wait1Msec(125);							//A (LOW AF), 16th Note
	playTone(110,10.5);						wait1Msec(125);							//A (LOW AF), 16th Note
	playTone(110,23);							wait1Msec(250);							//A (LOW AF), Eighth Note
	playTone(110,148);						wait1Msec(1500);						//A (LOW AF), Dotted Quarter Note
}


task usercontrol()
{
}
