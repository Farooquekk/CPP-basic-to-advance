#include <iostream.h>

int main() {
    int a = 10, b;

    b = a;         // Assign value of a to b
    b += a;        // Add a to b 
    b -= a;        // Subtract a from b 
    b *= a;        // Multiply b by a 
    b /= a;        // Divide b by a 
    b %= a;        // Remainder of b divided by a 

    cout << "Final value of b: " << b << endl;

    return 0;
}
