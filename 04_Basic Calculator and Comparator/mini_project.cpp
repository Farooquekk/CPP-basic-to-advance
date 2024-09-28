#include <iostream>
using namespace std;

int main() {
    
    int num1, num2;
    bool condition1, condition2;

    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    
    cout << "Sum: " << (num1 + num2) << endl;
    cout << "Difference: " << (num1 - num2) << endl;
    cout << "Product: " << (num1 * num2) << endl;
    cout << "Quotient: " << (num1 / num2) << endl;
    cout << "Remainder: " << (num1 % num2) << endl;

    
    cout << "Is num1 equal to num2? " << (num1 == num2) << endl;
    cout << "Is num1 greater than num2? " << (num1 > num2) << endl;
    cout << "Is num1 less than or equal to num2? " << (num1 <= num2) << endl;

    
    condition1 = (num1 > 0 && num2 > 0);  
    condition2 = (num1 < 0 || num2 < 0);  

    cout << "Are both numbers positive? " << condition1 << endl;
    cout << "Is at least one number negative? " << condition2 << endl;

    return 0;
}
