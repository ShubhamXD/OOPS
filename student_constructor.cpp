#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace

// Define the Student class
class Student {
private:
    // Private member variables
    string name; // Stores the student's name
    string rollno; // Stores the student's roll number
    int age; // Stores the student's age

public:
    // Zero-argument constructor
    Student() {
        name = "Unknown";
        rollno = "Unknown";
        age = 0;
    }

    // Parameterized constructor
    Student(string studentName, string studentRollno, int studentAge) {
        name = studentName;
        rollno = studentRollno;
        age = studentAge;
    }

    // Public member function to get the student's details
    void get() const {
        cout << "Name: " << name << endl; // Print the student's name
        cout << "Roll No: " << rollno << endl; // Print the student's roll number
        cout << "Age: " << age << endl; // Print the student's age
    }
};

// Main function
int main() {
    // Create an instance of the Student class using the zero-argument constructor
    Student student1;
    student1.get(); // Output the details of the student

    // Create an instance of the Student class using the parameterized constructor
    Student student2("Alice", "A001", 20);
    student2.get(); // Output the details of the student

    return 0; // Return 0 to indicate successful execution
}