#include <iostream>
using namespace std;

void greet(string name) {   // name is a parameter
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Aliceya");   // "Aliceya" is an argument passed to the function
    greet("Bobi");     // "Bobi" is another argument
    return 0;
}
