#include<iostream>
#include<string>


using namespace std;

class Student {
    public:
        // Attributes
        int id;
        int age;
        string name;
        int nos;

        // contructor: Default Constructor
        Student() {
            cout << "Default Constructor called" << endl;
        }

        // Beehaviour / Methods / Functions

        void study() {
            cout << this->name <<  "Student can study" << endl;
        }

        void play() {
            cout <<this->name  << "Student can play" << endl;
        }

        void sleep() {
            cout <<this->name << "Student can sleep" << endl;
        }

        // // Destructor: Default Destructor
        ~Student() {
            cout << "Destructor called" << endl;
        }

};

int main() {
    Student A;
    A.id = 1;
    A.age = 20;
    A.name = "John";
    A.nos = 5;

    return 0;
}

