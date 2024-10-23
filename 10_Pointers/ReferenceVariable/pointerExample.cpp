#include <iostream>
using namespace std;

void increment(int *ptr) {
    (*ptr)++;  // Increment value of original variable through pointer
}

int main() {
    int x = 10;
    increment(&x);  // Pass pointer to the function
    cout << "x after increment: " << x << endl; 

    return 0;
}
