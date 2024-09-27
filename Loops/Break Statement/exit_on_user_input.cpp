#include <iostream>
using namespace std;

int main() {
    int number;
    
    while (true) {
        cout << "Enter a number (negative to exit): ";
        cin >> number;
        
        if (number < 0) {
            cout << "Exiting the loop!" << endl;
            break;
        }
        
        cout << "You entered: " << number << endl;
    }
    
    return 0;
}
