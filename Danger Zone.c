
task main()
{
	//tempo = 160 BPM
  //Dotted Half Note = 1125
  //Half = 750
	//Dotted Quarter Note = 552.5
	//quarter = 375
	//eighth = 187.5

//1
	playTone(1046.502, 73);							wait1Msec(750);							//C, Half Note
	playTone(932.3275, 73);							wait1Msec(750);							//Bb, Half Note

//2
	playTone(880, 73);						     	wait1Msec(750);							//A, Half Note
	playTone(698.4565, 73);							wait1Msec(750);							//F, Half Note

//3
	playTone(783.9909, 35.5);						wait1Msec(375);							//G, Quarter Note
  playTone(783.9909, 16.75);					wait1Msec(187.5);				    //G, Eighth Note
  playTone(783.9909, 55.25);					wait1Msec(552.5);				    //G, Dotted Quarter Note

//4
  wait1Msec(375);

//4.25
  playTone(783.9909, 35.5);						wait1Msec(375);							//G, Quarter Note
  playTone(783.9909, 16.75);					wait1Msec(187.5);				    //G, Eighth Note
  playTone(783.9909, 55.25);					wait1Msec(552.5);				    //G, Dotted Quarter Note


//5
  wait1Msec(750);                                                //Dotted Half Rest

//6
  playTone(1046.502, 73);							wait1Msec(750);							//C, Half Note
	playTone(932.3275, 73);							wait1Msec(750);							//Bb, Half Note

//7
	playTone(880, 73);						     	wait1Msec(750);							//A, Half Note
	playTone(698.4565, 73);							wait1Msec(750);							//F, Half Note

//8
	playTone(783.9909, 35.5);						wait1Msec(375);							//G, Quarter Note
	playTone(932.3275, 16.75);					wait1Msec(187.5);					  //Bb, Eighth Note
	playTone(783.9909, 55.25);					wait1Msec(552.5);				    //G, Dotted Quarter Note

//9
	wait1Msec(375);                                                 //Quarter Rest

//10
	playTone(783.9909, 35.5);						wait1Msec(375);							//G, Quarter Note
	playTone(932.3275, 16.75);					wait1Msec(187.5);					  //Bb, Eighth Note
	playTone(783.9909, 73);							wait1Msec(750);				    	//G, Dotted Quarter Note
}
