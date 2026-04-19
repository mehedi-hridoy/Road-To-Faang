// Object and class with Dynamic Constructor
#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
    // Attributes
    int id; 
    int age; 
    string name;
    float marks;

    // Constructor: Dynamic Constructor
    Student(int id, int age, string name, float marks) {
        this->id = id;
        this->age = age;
        this->name = name;
        this->marks = marks;
        cout << "Dynamic Constructor called" << endl;   
    }
};

int main() {
    // creating object of Student class
    Student s1(1, 20, "John", 85.5);
    cout << "Student ID: " << s1.id << endl;
    cout << "Student Age: " << s1.age << endl;
    cout << "Student Name: " << s1.name << endl;
    cout << "Student Marks: " << s1.marks << endl;

    return 0;
}