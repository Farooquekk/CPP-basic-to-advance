#include <iostream>
using namespace std;


int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; 
    }
    return base * power(base, exponent - 1);  
}

int main() {
    int base = 2, exponent = 3;
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;  
    return 0;
}
