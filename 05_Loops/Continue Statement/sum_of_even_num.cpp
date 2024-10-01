#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            continue;  // Skip odd numbers
        }
        sum += i;
    }

    cout << "Sum of even numbers between 1 and 100 is: " << sum << endl;

    return 0;
}
