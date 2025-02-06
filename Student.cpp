#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string rollno;
    int age;

public:
    void set() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> rollno;
        cout << "Enter age: ";
        cin >> age;
    }

    void get() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student;
    student.set();
    student.get();
    return 0;
}