#include<iostream>
#include<string>
using namespace std;

class Add {
    public:
        int sum(int a, int b) {
            return a + b;
        }

        int sum(int a, int b, int c) {
            return a + b + c;
        }

        double sum(double a, double b) {
            return a + b;
        }

};

int main() {
    Add adder;
    cout << "Sum of 2 and 3 is: " << adder.sum(2, 3) << endl;
    cout << "Sum of 1, 2 and 3 is: " << adder.sum(1, 2, 3) << endl;
    cout << "Sum of 2.5 and 3.5 is: " << adder.sum(2.5, 3.5) << endl;

    return 0;
}