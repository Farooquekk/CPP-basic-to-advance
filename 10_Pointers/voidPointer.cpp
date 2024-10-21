#include <iostream>
using namespace std;

int main() {
    int x = 10;
    double y = 20.5;

    // Void pointer
    void *ptr;

    // Pointing to an integer
    ptr = &x;
    cout << "Value of x through void pointer (after typecasting): " << *(static_cast<int*>(ptr)) << endl;

    // Pointing to a double
    ptr = &y;
    cout << "Value of y through void pointer (after typecasting): " << *(static_cast<double*>(ptr)) << endl;

    return 0;
}
