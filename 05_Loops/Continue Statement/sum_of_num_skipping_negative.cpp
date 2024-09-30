#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> number;

        if (number < 0) {
            continue;  
        }

        sum += number;
    }

    cout << "Sum of positive numbers: " << sum << endl;

    return 0;
}
