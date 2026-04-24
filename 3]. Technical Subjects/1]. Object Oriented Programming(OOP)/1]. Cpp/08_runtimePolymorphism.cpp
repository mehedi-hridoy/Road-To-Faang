// Function Overriding and Runtime Polymorphism in C++
#include <iostream>
#include <string>
using namespace std;

class Shape {
    public: 
        virtual void draw() {
            cout << "Drawing a generic shape" << endl;
        }
};

class Circle: public Shape {
    public:
        void draw() override {
            cout << "Drawing a circle" << endl;
        }
};

class Rectangle: public Shape {
    public:
        void draw() override {
            cout << "Drawing a rectangle" << endl;
        }
};



int main() {
    Shape *shape1 = new Circle();
    Shape *shape2 = new Rectangle();

    shape1->draw(); // Output: Drawing a circle
    shape2->draw(); // Output: Drawing a rectangle

    delete shape1;
    delete shape2;

    return 0;
}