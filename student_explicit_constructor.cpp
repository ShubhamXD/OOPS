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
    // Explicit parameterized constructor
    explicit Student(string studentName, string studentRollno, int studentAge)
        : name(studentName), rollno(studentRollno), age(studentAge) {}

    // Public member function to get the student's details
    void get() const {
        cout << "Name: " << name << endl; // Print the student's name
        cout << "Roll No: " << rollno << endl; // Print the student's roll number
        cout << "Age: " << age << endl; // Print the student's age
    }
};

// Main function
int main() {
    // Create an instance of the Student class using the explicit constructor
    Student student1("Alice", "A001", 20);
    student1.get(); // Output the details of the student

    // The following line would cause a compilation error because the constructor is explicit
    // Student student2 = {"Bob", "B002", 21};

    return 0; // Return 0 to indicate successful execution
}







/*
- The `Student` class has an explicit parameterized constructor that initializes member variables with given values.
- The `explicit` keyword prevents implicit conversions and copy-initialization.
- The `get` member function outputs the student's details.
- Attempting to create a `Student` object using copy-initialization (commented out in `main`) would result in a compilation error, enforcing the use of direct initialization.

*/