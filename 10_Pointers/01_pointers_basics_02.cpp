#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *ptr = &x;    // Pointer to x
    int **ptr2 = &ptr;  // Pointer to pointer --> points to ptr

    cout << "Value of x: " << **ptr2 << endl;  // Dereference twice to get the value of x (5)

    return 0;
}
