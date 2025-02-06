#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace

// Define the Student class
class Student {
private:
    string name; // Private member variable to store the student's name
    string rollno; // Private member variable to store the student's roll number
    int age; // Private member variable to store the student's age

public:
    void set(); // Declaration of the set function
    void get(); // Declaration of the get function
};

// Definition of the set function outside the class
void Student::set() {
    cout << "Enter name: "; // Prompt the user to enter the name
    cin >> name; // Read the name from the user
    cout << "Enter roll no: "; // Prompt the user to enter the roll number
    cin >> rollno; // Read the roll number from the user
    cout << "Enter age: "; // Prompt the user to enter the age
    cin >> age; // Read the age from the user
}

// Definition of the get function outside the class
void Student::get() {
    cout << "Name: " << name << endl; // Print the student's name
    cout << "Roll No: " << rollno << endl; // Print the student's roll number
    cout << "Age: " << age << endl; // Print the student's age
}

// Main function
int main() {
    Student student; // Create an instance of the Student class
    student.set(); // Call the set function to input the student's details
    student.get(); // Call the get function to output the student's details
    return 0; // Return 0 to indicate successful execution
}