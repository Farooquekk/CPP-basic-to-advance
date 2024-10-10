#include <iostream>
using namespace std;

int main() {
    int x = 10;    // A normal integer variable
    int *ptr;      // Declaration of a pointer variable
    
    ptr = &x;      // Pointer is assigned the address of 'x'
    
    cout << "Address of x: " << ptr << endl;   // Outputs the memory address of x
    cout << "Value of x using pointer: " << *ptr << endl;  // Outputs the value of x --> dereferencing
    
    return 0;
}
