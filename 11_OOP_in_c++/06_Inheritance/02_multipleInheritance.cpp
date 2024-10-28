#include <iostream>
using namespace std;

class A {
    public:
        void showA() {
            cout << "This is class A." << endl;
        }
};

class B {
    public:
        void showB() {
            cout << "This is class B." << endl;
        }
};

class C : public A, public B {  // Derived class with multiple inheritance
    public:
        void showC() {
            cout << "This is class C, derived from A and B." << endl;
        }
};

int main() {
    C obj;
    obj.showA();  // Accessing class A method
    obj.showB();  // Accessing class B method
    obj.showC();  // Accessing class C method
    return 0;
}
