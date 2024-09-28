#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> N;

    for (; N != 0; N /= 10) {
        digit = N % 10;
        sum += digit;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
