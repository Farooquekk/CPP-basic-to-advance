#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> N;

    while (N != 0) {
        digit = N % 10;
        sum += digit;
        N /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
