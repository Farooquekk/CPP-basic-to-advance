#include <iostream>
using namespace std;

int main() {
    int num;

    // Taking user input
    cout << "Enter a number: ";
    cin >> num;

    // if-else if-else control flow
    if (num > 0) {
        cout << "The number is positive." << endl;
    }
    else if (num < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
