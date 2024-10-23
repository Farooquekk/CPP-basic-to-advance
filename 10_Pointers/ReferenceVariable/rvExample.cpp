#include <iostream>
using namespace std;

void increment(int &ref) {
    ref++;  // Increment value of original variable through reference
}

int main() {
    int x = 10;
    increment(x);  // Pass by referencE
    cout << "x after increment: " << x << endl;  

    return 0;
}
