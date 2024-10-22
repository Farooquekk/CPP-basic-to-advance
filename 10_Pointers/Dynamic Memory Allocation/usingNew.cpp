#include <iostream>
using namespace std;

int main() {
    // here we --> Dynamically allocate memory for an integer
    int *ptr = new int;

    // Assign a value to the dynamically allocated memory
    *ptr = 100;

    cout << "Value of dynamically allocated integer: " << *ptr << endl;

    // Release the allocated memory
    delete ptr;

    return 0;
}
