#include <iostream>
using namespace std;

int main() {
    int num, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;
        num /= 10;

        if (digit % 2 == 0) {
            continue;  // Skip even digits
        }

        sum += digit;
    }

    cout << "Sum of odd digits: " << sum << endl;

    return 0;
}
