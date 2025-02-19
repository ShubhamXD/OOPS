#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace

// Define the Student class
class Student {
private:
    // Private member variables
    string name; // Stores the student's name
    string rollno; // Stores the student's roll number
    int age; // Stores the student's age
    const int id; // Const member variable to store the unique ID (must be initialized in the constructor)

public:
    // Constructor to initialize the const member variable 'id' and other member variables
    Student(int uniqueId, string studentName, string studentRollno, int studentAge) 
        : id(uniqueId), name(studentName), rollno(studentRollno), age(studentAge) {}

    // Public member function to get the student's details
    void get() const {
        cout << "ID: " << id << endl; // Print the student's ID
        cout << "Name: " << name << endl; // Print the student's name
        cout << "Roll No: " << rollno << endl; // Print the student's roll number
        cout << "Age: " << age << endl; // Print the student's age
    }
};

// Main function
int main() {
    // Create instances of the Student class with unique IDs and details
    Student student1(1, "Alice", "A001", 20);
    Student student2(2, "Bob", "B002", 21);

    // Output the details of the students
    student1.get();
    student2.get();

    return 0; // Return 0 to indicate successful execution
}