#include <iostream>
using namespace std;

class Complex {
    private:
        int real;
        int imag;

    public:
        Complex(int r, int i) : real(r), imag(i) {}

        // Overload + operator
        Complex operator+(const Complex& other) {
            return Complex(real + other.real, imag + other.imag);
        }

        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;  // Uses overloaded + operator
    c3.display();        
    return 0;
}
