#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, original, remainder, result = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> N;
    
    original = N;
    
    // Count number of digits
    for (int temp = N; temp != 0; temp /= 10) {
        digits++;
    }

    for (int temp = N; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, digits);
    }

    if (result == original)
        cout << N << " is an Armstrong number" << endl;
    else
        cout << N << " is not an Armstrong number" << endl;

    return 0;
}
