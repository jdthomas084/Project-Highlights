#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
	Name:   Joshua D. Thomas
	Date:   2026-16-11
	Title:  My Sixth C++ Program

	Synopsis:   This program allows the user to enter names and ages of people, storing them in a vector of Person objects. 
                The user can input multiple entries until they choose to exit. After all entries are made, the program displays the list of names and ages.
*/

// Custom Person class to store name and age
class Person {
private:
	string name; // The person's name
	int age; // The person's age
public:
	Person(const string& n, int a) : name(n), age(a) {} // Constructor to initialize name and age
    
	// Getter for the name
	const string& getName() const {
        return name;
    }
    
	// Getter for the age
	int getAge() const {
        return age;
    }
};

int main() {
    // Create a vector to store Person objects
    vector<Person> people;

    // Variables to hold user input
    string name;
    int age;

    // Display instructions to the user
    cout << "Enter names and ages (type 'exit' or press Enter to finish):" << endl;

    // Keep asking for people until the user chooses to stop
    while (true) {

        // Prompt for a person's name
        cout << "Enter name for person " << people.size() + 1 << ": ";

        // Read the entire line as the name
        getline(cin, name);

        // Exit the loop if the user presses Enter or types "exit"
        if (name.empty() || name == "exit") {
            break;
        }

        // Prompt for the person's age
        cout << "Enter age for " << name << ": ";

        // Read the age
        cin >> age;

        // Remove the leftover newline character from the input buffer
        cin.ignore();

        // Validate that the age is not negative
        while (age < 0) {
            cout << "Please enter a valid age: ";
            cin >> age;
            cin.ignore(); // Remove the newline character
        }

        // Create a new Person object and add it to the vector
        people.emplace_back(name, age);
    }

    // Display all entered people
    cout << "\nYou entered the following names and ages:" << endl;

    // Loop through each Person object in the vector
    for (const auto& person : people) {

        // Display the person's name and age
        cout << person.getName()
            << " (Age: " << person.getAge() << ")"
            << endl;
    }

    // Indicate successful program completion
    return 0;
}