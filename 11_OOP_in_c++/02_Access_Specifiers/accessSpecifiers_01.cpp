#include <iostream>
using namespace std;

class Sample {
    public:
        int publicVar;  // Public member

        void display() {
            cout << "Public variable: " << publicVar << endl;
        }
};

int main() {
    Sample obj;
    obj.publicVar = 10; 
    obj.display();      

    return 0;
}
