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

        // Parameterized Constructor
        Student(int id, int age, string name, int nos) {
            this->id = id;
            this->age = age;
            this->name = name;
            this->nos = nos;
            cout << "Parameterized Constructor called" << endl;
        }
        

        // Copy Constructor
        Student(const Student &s) {
            this->id = s.id;
            this->age = s.age;
            this->name = s.name;
            this->nos = s.nos;
            cout << "Copy Constructor called" << endl;      
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
    A.study();

    Student B(2, 21, "Jane", 6);
    B.play();

    Student C = A; // Copy Constructor is called
    C.sleep();
    
    return 0;
}

