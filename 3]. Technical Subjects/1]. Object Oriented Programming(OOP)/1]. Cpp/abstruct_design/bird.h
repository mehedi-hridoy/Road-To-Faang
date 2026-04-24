#include<iostream>
#include<string>
using namespace std;

#if !defined(BIRD_H)
#define BIRD_H

class Bird {
    public: 
          virtual void eat() = 0; // pure virtual function
          virtual void fly() = 0; // pure virtual function    

          // now this class becomes an interface 


          // classes that inherit this Bird class must implement the eat and fly functions, otherwise they will also become abstract classes and cannot be instantiated
};


class Sparrow : public Bird {
    public:
        void eat() override {
            cout << "Sparrow is eating seeds" << endl;
        }

        void fly() override {
            cout << "Sparrow is flying" << endl;
        }
};


class Eagle : public Bird {
    public:
        void eat() override {
            cout << "Eagle is eating fish" << endl;
        }

        void fly() override {
            cout << "Eagle is flying" << endl;
        }
};

#endif // BIRD_H
