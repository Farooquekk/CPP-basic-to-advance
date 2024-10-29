#include <iostream>
using namespace std;

class Animal {
    public:
        Animal() {
            cout << "Animal Constructor" << endl;
        }
};

class Dog : public Animal {
    public:
        Dog() : Animal() {  // Calls the base class constructor first
            cout << "Dog Constructor" << endl;
        }
};

int main() {
    Dog d;  // Creating Dog object triggers both Animal and Dog constructors
    return 0;
}
