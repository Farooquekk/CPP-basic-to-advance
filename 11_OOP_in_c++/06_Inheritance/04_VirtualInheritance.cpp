#include <iostream>
using namespace std;

class Animal {
    public:
        void sound() {
            cout << "This is an animal sound." << endl;
        }
};

class Mammal : virtual public Animal { };  // Virtual inheritance
class Bird : virtual public Animal { };     // Virtual inheritance

class Bat : public Mammal, public Bird { };  // Derived class

int main() {
    Bat b;
    b.sound();  // No ambiguity, only one instance of 'Animal' --> class is inherited
    return 0;
}
