#include <iostream>
using namespace std;

int main() {
    int N, reversed = 0, remainder;
    cout << "Enter a number: ";
    cin >> N;

    do {
        remainder = N % 10;
        reversed = reversed * 10 + remainder;
        N /= 10;
    } while (N != 0);

    cout << "Reversed number is: " << reversed << endl;
    return 0;
}
