#include <iostream>
#include <vector>
using namespace std;

/*
	Author: Joshua D. Thomas
	Date:	11-16-2026
	Title:  My Fourth C++ Program
*/

// My fourth C++ program. This program averages a set of numbers, passed by Reference.

double calculateAverage(const vector<int>& numbers) {
    // (const vector<int>& numbers) - Use the original vector, don't make a copy, and don't let me modify it Here.
    // This is the preferred way to pass large objects such as vectors, strings, and structs when the function only needs to read them.
    /*
		Receives:             A vector of integers [numbers]
		Returns:              The average of the numbers in the vector as a Double    
    */
	if (numbers.empty()) return 0.0; // If there are no numbers to operate on, return 0.0 to avoid division by zero

	// Declare and initialize a variable to hold the sum of the numbers
    int sum = 0;
    
	// Loop to sum the numbers in the vector
    for (int num : numbers) {
		sum += num; // Accumulate the sum of the numbers
    }

	return static_cast<double>(sum) / numbers.size(); // Cast [sum] to type Double, then Divide the sum by the number of elements in the vector to calculate the average and return it
}


int main() {
    vector<int> grades = { 83, 83, 70, 100 }; // Create the <grades> vector

	// Output the average grade
    cout << "Average grade: " << calculateAverage(grades) << endl;
    return 0;
}