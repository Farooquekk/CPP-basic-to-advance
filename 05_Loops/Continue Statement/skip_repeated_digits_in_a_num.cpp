#include <iostream>
using namespace std;

bool isRepeated(int digit, bool digits[]) {
    if (digits[digit]) return true;
    digits[digit] = true;
    return false;
}

int main() {
    int num, digit;
    bool digits[10] = {false};

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;
        num /= 10;

        if (isRepeated(digit, digits)) {
            continue;  // Skip repeated digits
        }

        cout << digit << " ";
    }

    return 0;
}
