#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    
    while (true) {
        cout << "Enter a positive number (negative to stop): ";
        cin >> number;
        
        if (number < 0) {
            cout << "Negative number entered, stopping the loop." << endl;
            break;
        }
        
        sum += number;
    }
    
    cout << "Sum of positive numbers: " << sum << endl;
    
    return 0;
}
