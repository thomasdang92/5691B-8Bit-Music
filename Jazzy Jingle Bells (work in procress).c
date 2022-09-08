
task main()
{
	//tempo = 180;
//Whole Note = 1333.333
//Dotted Half Note = 1000
//Half Note = 666.666
//Quarter Note = 333.333
//8th Note = 166.666
//Triplet Note = 111.111

//1st Measure
playTone(466.1638, 30.3333);							wait1Msec(333.333);							//Bb, Quarter Note
playTone(466.1638, 30.3333);							wait1Msec(333.333);							//Bb, Quarter Note
playTone(466.1638, 64.6666);							wait1Msec(666.666);							//Bb, Half  Note

//2nd Measure
playTone(466.1638, 30.3333);							wait1Msec(333.333);							//Bb, Quarter Note
playTone(466.1638, 13.6666);							wait1Msec(166.666);							//Bb, 8th Note

playTone(466.1638, 16.6666);							wait1Msec(166.666);							//Bb, 8th Note
playTone(466.1638, 64.6666);							wait1Msec(666.666);							//Bb, Half  Note

//3rd Measure
wait1Msec(166.666);//8th rest
playTone(466.1638, 13.6666);							wait1Msec(166.666);							//Bb, 8th Note
playTone(587.3295, 13.6666);							wait1Msec(166.666);							//D, 8th Note
wait1Msec(166.666);//8th rest

playTone(391.9954, 13.6666);							wait1Msec(166.666);							//G, 8th Note
playTone(391.9954, 13.6666);							wait1Msec(166.666);							//G, 8th Note

playTone(523.2511, 13.6666);							wait1Msec(166.666);							//C, 8th Note

playTone(466.1638, 100);									wait1Msec(1000);					  //Bb, Dotted Half Note

//4th Measure
playTone(622.254, 13.6666);								wait1Msec(166.666);							//C, 8th Note

//5th Measure
playTone(466.1638, 10.9111);							wait1Msec(111.111);							//Bb, Triplet Note
playTone(523.2511, 10.111);								wait1Msec(111.111);							//Bb, Triplet Note
playTone(587.3295, 10.9111);							wait1Msec(111.111);							//D, Triplet Note

//6th Measure
playTone(622.254, 30.3333);								wait1Msec(333.333);							//D#, Quarter Note
playTone(622.254, 30.3333);								wait1Msec(333.333);							//D#, Quarter Note
playTone(622.254, 30.3333);								wait1Msec(333.333);							//D#, Quarter Note
playTone(698.4563, 13.6666);							wait1Msec(166.666);							//F, 8th Note
playTone(622.254, 13.6666);								wait1Msec(166.666);							//D#, 8th Note

//7th Measure
wait1Msec(166.666);//8th rest
playTone(622.254, 13.6666);								wait1Msec(166.666);							//D#, 8th Note
wait1Msec(166.666);//8th rest
playTone(622.254, 31.3333);								wait1Msec(333.333);							//D#, Quarter Note
wait1Msec(166.666);//8th rest
playTone(698.4565, 13.6666);							wait1Msec(166.666);							//F, 8th Note
playTone(622.254, 13.6666);								wait1Msec(166.666);							//D#, 8th Note

//8th Measure




}
