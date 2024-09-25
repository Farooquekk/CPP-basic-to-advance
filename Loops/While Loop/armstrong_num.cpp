#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, original, remainder, result = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> N;

    original = N;

    // Count number of digits
    int temp = N;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = N;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if (result == original)
        cout << N << " is an Armstrong number" << endl;
    else
        cout << N << " is not an Armstrong number" << endl;

    return 0;
}
