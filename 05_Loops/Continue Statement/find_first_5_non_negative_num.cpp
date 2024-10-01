#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0) {
            continue;  // Skip negative numbers
        }

        cout << num << " ";
        count++;

        if (count == 5) {
            break;  // Stop after printing 5 non-negative numbers
        }
    }

    return 0;
}
