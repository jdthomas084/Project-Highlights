/*
	Author: Joshua D. Thomas
	Date:	11-16-2026
	Title:  My Second C++ Program
*/
// My second C++ program. This program will ask the user for their first and last name, and then output a greeting to the console.
#include <iostream>
#include <string>
using namespace std;

// Declare function prototype for getName
string getName(string, string);

int main()
{
	/*
		Entry Point: INT main( )
		Receives:	Nothing.
		Returns:	0
	*/

	// Declare and initialize variables to hold the first and last name.
	string first_name = ""; // Set to NULL
	string last_name = ""; // Set to NULL

	cout << "Enter your First Name: "; // Output text to the console.
	cin >> first_name;
	//
	cout << "Enter your Last Name: "; // Output text to the console.
	cin >> last_name;
	//
	string name = getName(first_name, last_name);
	
	cout << "Hello, " << name << endl; // Output text to the console.
	return 0;
}

string getName(string first, string last)
{
	/*
		Receives:   [STRING] frst, [STRING] last
		Returns:    [STRING] String concatenation of first and last name.
	*/
	return first + " " + last;
}
