/*
	Author: Joshua D. Thomas
	Date:	11-16-2026
	Title:  My Third C++ Program
*/
// My third C++ program. This program will calculate the number of days in the specificed number of weeks.
#include <iostream>
using namespace std;

int get_Weeks() {
	/*
		Function: INT get_Weeks( )
		Receives: Nothing.
		Returns:  INT weeks
	*/
	int weeks = 0; // Placeholder for the number of weeks.
	cout << "Please enter the number of weeks: "; // Prompt the user to enter the number of weeks.
	cin >> weeks; // Receive input from the user and store it in the variable 'weeks'.
	return weeks; // Return the number of weeks entered by the user.
}

int main() {
	/*
		Entry Point: INT main( )
		Receives:	Nothing.
		Returns:	0
	*/

	// Delcare and initialize variables to hold the number of grams of carbohydrates, protein, and fat in the dish.
	int weeks = get_Weeks();
	int days = weeks * 7;

	cout << "There are " << days << " days in " << weeks << " weeks." << endl; // Output to the console the total number of days in the specified number of weeks.
	return 0;
}