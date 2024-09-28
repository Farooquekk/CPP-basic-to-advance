#include <iostream>
using namespace std;

int main() {
    int N, reversed = 0, remainder;
    cout << "Enter a number: ";
    cin >> N;

    for (; N != 0; N /= 10) {
        remainder = N % 10;
        reversed = reversed * 10 + remainder;
    }
    cout << "Reversed number is: " << reversed << endl;
    return 0;
}
