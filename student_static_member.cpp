#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace

// Define the Student class
class Student {
private:
    string name; // Private member variable to store the student's name
    string rollno; // Private member variable to store the student's roll number
    int age; // Private member variable to store the student's age
    static int count; // Static member variable to store the count of Student objects

public:
    // Constructor to increment the count when a new Student object is created
    Student() {
        count++;
    }

    // Public member function to set the student's details
    void set() {
        cout << "Enter name: "; // Prompt the user to enter the name
        cin >> name; // Read the name from the user
        cout << "Enter roll no: "; // Prompt the user to enter the roll number
        cin >> rollno; // Read the roll number from the user
        cout << "Enter age: "; // Prompt the user to enter the age
        cin >> age; // Read the age from the user
    }

    // Public member function to get the student's details
    void get() {
        cout << "Name: " << name << endl; // Print the student's name
        cout << "Roll No: " << rollno << endl; // Print the student's roll number
        cout << "Age: " << age << endl; // Print the student's age
    }

    // Static member function to get the count of Student objects
    static int getCount() {
        return count;
    }
};

// Initialize the static member variable
int Student::count = 0;

// Main function
int main() {
    Student student1; // Create an instance of the Student class
    student1.set(); // Call the set function to input the student's details
    student1.get(); // Call the get function to output the student's details

    Student student2; // Create another instance of the Student class
    student2.set(); // Call the set function to input the student's details
    student2.get(); // Call the get function to output the student's details

    cout << "Total number of students: " << Student::getCount() << endl; // Print the total number of Student objects created

    return 0; // Return 0 to indicate successful execution
}