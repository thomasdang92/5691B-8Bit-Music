
task finalCountdown()
{
	//tempo = about 118 BPM
	//Quarter Note TIED to Dotted Quarter Note = 1271.175
	//Dotted Quarter Note = 762.705
	//Quarter Note = 508.47
	//Eighth Note = 254.235
	//16 Note = 127.1175


//1
playTone(1108.731, 10.71175);							wait1Msec(127.1175);							//C#, 16th Note
playTone(987.7666, 10.71175);							wait1Msec(127.1175);							//B, 16th Note
playTone(1108.731, 48.847);								wait1Msec(508.47);								//C#, Quarter Note

//1 - 2
playTone(739.98888, 125.1175);						wait1Msec(1271.175);							//F#, Quarter Note TIED to Dotted Quarter Note

//2
playTone(1174.659, 10.71175);							wait1Msec(127.1175);							//D, 16th Note
playTone(1108.731, 10.71175);							wait1Msec(127.1175);							//C#, 16th Note
playTone(1174.659, 23.4235);							wait1Msec(254.235);								//D, Eighth Note
playTone(1108.731, 23.4235);							wait1Msec(254.235);								//C#, Eighth Note

//2 - 3
playTone(987.7666, 125.1175);							wait1Msec(1271.175);							//B, Quarter Note TIED to Dotted Quarter Note

//3
playTone(1174.659, 10.71175);							wait1Msec(127.1175);							//D, 16th Note
playTone(1108.731, 10.71175);							wait1Msec(127.1175);							//C#, 16th Note
playTone(1174.659, 48.847);								wait1Msec(508.47);								//D, Quarter Note

//3 - 4
playTone(739.98888, 125.1175);						wait1Msec(1271.175);							//F#, Quarter Note TIED to Dotted Quarter Note

//4
playTone(987.7666, 10.71175);							wait1Msec(127.1175);							//B, 16th Note
playTone(880, 10.71175);									wait1Msec(127.1175);							//A, 16th Note
playTone(987.7666, 23.4235);							wait1Msec(254.235);								//B, Eighth Note
playTone(880, 23.4235);										wait1Msec(254.235);								//A, Eighth Note
playTone(830.6094, 23.4235);							wait1Msec(254.235);								//G#, Eighth Note
playTone(987.7666, 23.4235);							wait1Msec(254.235);								//B, Eighth Note

//5
playTone(880, 76.2705);										wait1Msec(762.705);								//A, Dotted Quarter Note
playTone(1108.731, 10.71175);							wait1Msec(127.1175);							//C#, 16th Note
playTone(987.7666, 10.71175);							wait1Msec(127.1175);							//B, 16th Note
playTone(1108.731, 48.847);								wait1Msec(508.47);								//C#, Quarter Note

//5 - 6
playTone(739.98888, 125.1175);						wait1Msec(1271.175);							//F#, Quarter Note TIED to Dotted Quarter Note

//6
playTone(1174.659, 10.71175);							wait1Msec(127.1175);							//D, 16th Note
playTone(1108.731, 10.71175);							wait1Msec(127.1175);							//C#, 16th Note
playTone(1174.659, 23.4235);							wait1Msec(254.235);								//D, Eighth Note
playTone(1108.731, 23.4235);							wait1Msec(254.235);								//C#, Eighth Note

//6 - 7
playTone(987.7666, 125.1175);							wait1Msec(1271.175);							//B, Quarter Note TIED to Dotted Quarter Note

//7
playTone(1174.659, 10.71175);							wait1Msec(127.1175);							//D, 16th Note
playTone(1108.731, 10.71175);							wait1Msec(127.1175);							//C#, 16th Note
playTone(1174.659, 48.847);								wait1Msec(508.47);								//D, Quarter Note

//7 - 8
playTone(739.98888, 125.1175);						wait1Msec(1271.175);							//F#, Quarter Note TIED to Dotted Quarter Note
}
