#include <iostream>

class Student {
private:
    std::string name;
    int age;
    float grade;

public:
    // Constructor using initializer list
    Student(const std::string& n, int a, float g) : name(n), age(a), grade(g) {}

    void display() const {
        std::cout << "Name: " << name << "\nAge: " << age << "\nGrade: " << grade << std::endl;
    }
};

int main() {
    // Creating an object of Student using the initializer list constructor
    Student student("John Doe", 20, 85.5);
    student.display();

    return 0;
}