#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
	Name: Joshua D. Thomas
	Date: 11-16-2026
	Title: My Fifth C++ Program
*/
int main() {
	/*
		Receives:
			- User input of names until "exit" is typed.
		Returns: 0.
	*/
	vector<string> names; // Declare a vector to store names
	string name; // Declare a string variable to hold user input
	
	// Output instructions to the user to the console
	cout << "Enter names (type 'exit' or press Enter to finish):" << endl;
	
	// Loop to receive user input until "exit" is entered
	while (true) {
		getline(cin, name); // Get user input for a name
		
		// Check if the input is "exit" or empty, and break the loop if so
		if (name == "exit" or name.empty()) {
			break;
		}
		names.push_back(name); // Add the entered name to the vector
	}
	
	cout << "\nYou entered the following names: "; // Ouptut to the console
	
	// Loop through the vector of names and print them, separated by commas
	for (const auto& n : names) {
		if (n != names.back()) {
			cout << n << ", ";
		} else {
			cout << n << endl;
		}
	}

	return 0;
}