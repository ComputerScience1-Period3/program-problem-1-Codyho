/*
Cody Ho - 9/12/17 Period 3
Assignment Name :  Display text project
Intro to C++ Visual Studios Creating New Project
Displaying Text to the Console from Code
*/


// Libraries
#include <iostream> // endl << >> cin cout
#include <conio.h> // gives access to _kbhit() and _getch() for the pause() function

//Namespaces
using namespace std;


//functions
void pause() { // acts as system("pause")
	cout << "press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";

}

// MAIN
void main() {
	char x = 'l'; // stores the value of l
	//Display text
	cout << "Hello World!" << endl;
	cout << "this is room K" << 226 << endl;
	pause(); // to see what was displayed

}
