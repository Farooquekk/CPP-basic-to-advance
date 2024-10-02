#include <iostream>
using namespace std;

int multiply(int a, int b) {   // Function that returns an int
    return a * b;              // Returns the product of a and b
}

int main() {
    int result = multiply(3, 4);  // Store the return value
    cout << "3 * 4 = " << result << endl;  
    return 0;
}
