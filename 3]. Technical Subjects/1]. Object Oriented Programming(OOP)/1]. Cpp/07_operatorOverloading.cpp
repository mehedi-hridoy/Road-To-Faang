#include<iostream>
#include<string>
using namespace std;

class Complex {
    private:
        int real;
        int imag;
    
    public:
        Complex() {
            real = imag = -1.0;
        }

        Complex(int r, int i) : real(r), imag(i) {
            
        }

        Complex operator+ (const Complex &B) {
            // this -> A instance

            Complex temp;
            temp.real = this->real + B.real;
            temp.imag = this->imag + B.imag;
            return temp;
        }
        void print() {
            printf("[%d + i%d]\n", this->real, this->imag);
        }
};

int main() {
    Complex A(3, 4);
    A.print();
    Complex B(1, 2);
    B.print();

    // Complex C = A + B; // This will cause a compilation error because the + operator is not defined for Complex class

    Complex C = A + B;
    cout << "Result of A + B: ";
    C.print();

}