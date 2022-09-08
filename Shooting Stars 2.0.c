
task main()
{
	//tempo = 125 BPM
	//Dotted Quarter Note = 720
	//Quarter Note = 480
	//Eighth Note = 240
	//16th Note = 120


//1
playTone(622.254, 46);							wait1Msec(480);							//Eb, Quarter Note
wait1Msec(240);                                                 //Eighth Rest
playTone(622.254, 22);							wait1Msec(240);							//Eb, Eighth Note
playTone(659.2551, 46);							wait1Msec(480);							//E, Quarter Note
playTone(493.8833, 22);							wait1Msec(240);							//B, Eighth Note
playTone(415.3047, 10);							wait1Msec(120);							//G#, 16th Note
playTone(622.254, 58);							wait1Msec(600);							//Eb, 16th Note TIED to a Quarter Note

//2
wait1Msec(240);                                                 //Eighth Rest
playTone(622.254, 22);							wait1Msec(240);							//Eb, Eighth Note
playTone(659.2551, 46);							wait1Msec(480);							//E, Quarter Note
playTone(493.8833, 22);							wait1Msec(240);							//B, Eighth Note
playTone(415.3047, 10);							wait1Msec(120);							//G#, 16th Note
playTone(622.254, 58);							wait1Msec(600);							//Eb, 16th Note TIED to a Quarter Note

//3
wait1Msec(240);                                                 //Eighth Rest
playTone(622.254, 22);							wait1Msec(240);							//Eb, Eighth Note
playTone(659.2551, 46);							wait1Msec(480);							//E, Quarter Note
playTone(493.8833, 22);							wait1Msec(240);							//B, Eighth Note
playTone(415.3047, 10);							wait1Msec(120);							//G#, 16th Note
playTone(622.254, 58);							wait1Msec(600);							//Eb, 16th Note TIED to a Quarter Note

//4
wait1Msec(240);                                                 //Eighth Rest
playTone(622.254, 22);							wait1Msec(240);							//Eb, Eighth Note
playTone(659.2551, 46);							wait1Msec(480);							//E, Quarter Note
playTone(554.3653, 22);							wait1Msec(240);							//C#, Eighth Note
playTone(415.3047, 22);							wait1Msec(240);							//G#, Eighth Note
playTone(739.9888, 46);							wait1Msec(480);							//F#, Quarter Note

//5
wait1Msec(240);                                                 //Eighth Rest
playTone(739.9888, 22);							wait1Msec(240);							//F#, Eighth Note
playTone(830.6094, 46);							wait1Msec(480);							//(High one) G#, Quarter Note
playTone(622.254, 22);							wait1Msec(240);							//Eb, Eighth Note
playTone(554.3653, 10);							wait1Msec(120);							//C#, 16th Note
playTone(739.9888, 58);							wait1Msec(600);							//F#, 16th Note TIED to a Quarter Note

//6
wait1Msec(240);                                                 //Eighth Rest
playTone(739.9888, 22);							wait1Msec(240);							//F#, Eighth Note
playTone(830.6094, 46);							wait1Msec(480);							//(High one) G#, Quarter Note
playTone(622.254, 22);							wait1Msec(240);							//Eb, Eighth Note
playTone(554.3653, 10);							wait1Msec(120);							//C#, 16th Note
playTone(739.9888, 58);							wait1Msec(600);							//F#, 16th Note TIED to a Quarter Note

//7
wait1Msec(240);                                                 //Eighth Rest
playTone(739.9888, 22);							wait1Msec(240);							//F#, Eighth Note
playTone(830.6094, 46);							wait1Msec(480);							//(High one) G#, Quarter Note
playTone(622.254, 22);							wait1Msec(240);							//Eb, Eighth Note
playTone(554.3653, 10);							wait1Msec(120);							//C#, 16th Note
playTone(739.9888, 58);							wait1Msec(600);							//F#, 16th Note TIED to a Quarter Note
}
