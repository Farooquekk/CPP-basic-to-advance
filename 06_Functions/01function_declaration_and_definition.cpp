#include <iostream>
using namespace std;

// Function Declaration 
int add(int, int);  // Declaration of a Function that takes two integers and returns an integer

int main() {
    int a = 5, b = 3;

    // Calling the Function after Declaration
    int sum = add(a, b);

    cout << "Sum: " << sum << endl;  

    return 0;
}

// Function Definition 
int add(int x, int y) {
    return x + y;  // Function Body 
}
