#include <iostream>
using namespace std;

class Animal {  // Base class
    public:
        void sound() {
            cout << "This is an animal sound." << endl;
        }
};

class Dog : public Animal {  // Derived class (Single --> inheritance)
    public:
        void bark() {
            cout << "Dog barks: Woof Woof!" << endl;
        }
};

int main() {
    Dog d;
    d.sound();  // Accessing base class method
    d.bark();   // Accessing derived class method
    return 0;
}
