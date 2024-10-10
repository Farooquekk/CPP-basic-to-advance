#include <iostream>
using namespace std;

void increment(int *ptr) {
    (*ptr)++;  // Increment the value pointed to by the pointer
}

int main() {
    int x = 10;
    increment(&x);  // Pass the address of x
    cout << "Value of x: " << x << endl;  
    return 0;
}
