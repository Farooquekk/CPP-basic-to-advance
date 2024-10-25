#include <iostream>
using namespace std;

class Sample {
    private:
        int privateVar;  // Private member

    public:
        void setPrivateVar(int value) {
            privateVar = value;  // Accessing private member within the class
        }

        void display() {
            cout << "Private variable: " << privateVar << endl;
        }
};

int main() {
    Sample obj;
    // obj.privateVar = 10;  // Error
    obj.setPrivateVar(10);   // Set privateVar using a public function
    obj.display();

    return 0;
}
