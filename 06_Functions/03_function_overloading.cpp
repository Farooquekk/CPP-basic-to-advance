#include <iostream>
using namespace std;

// Overloaded functions with the same name, but different parameters
int add(int a, int b) {        // Function to add two integers
    return a + b;
}

double add(double a, double b) {   // Function to add two double values
    return a + b;
}

int add(int a, int b, int c) {     // Function to add three Integers
    return a + b + c;
}

int main() {
    cout << "Sum of 2 and 3: " << add(2, 3) << endl;               
    cout << "Sum of 1.5 and 2.5: " << add(1.5, 2.5) << endl;       
    cout << "Sum of 1, 2, and 3: " << add(1, 2, 3) << endl;       
    return 0;
}
