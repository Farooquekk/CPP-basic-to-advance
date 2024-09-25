#include <iostream>
using namespace std;

int main() {
    int N, reversed = 0, remainder;
    cout << "Enter a number: ";
    cin >> N;

    while (N != 0) {
        remainder = N % 10;
        reversed = reversed * 10 + remainder;
        N /= 10;
    }
    cout << "Reversed number is: " << reversed << endl;
    return 0;
}
