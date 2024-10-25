#include <iostream>
using namespace std;

class Base {
    protected:
        int protectedVar;  // Protected member

    public:
        void setProtectedVar(int value) {
            protectedVar = value;
        }
};

class Derived : public Base {
    public:
        void display() {
            cout << "Protected variable: " << protectedVar << endl;  // Accessible in derived class
        }
};

int main() {
    Derived obj;
    // obj.protectedVar = 10;  // Error
    obj.setProtectedVar(10);   // Set protectedVar using a public function from the base class
    obj.display();

    return 0;
}
