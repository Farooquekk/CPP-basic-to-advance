#include <iostream>
using namespace std;

int main() {
    int N, reversed = 0, remainder, original;
    cout << "Enter a number: ";
    cin >> N;

    original = N;

    do {
        remainder = N % 10;
        reversed = reversed * 10 + remainder;
        N /= 10;
    } while (N != 0);

    if (original == reversed)
        cout << "The number is a palindrome" << endl;
    else
        cout << "The number is not a palindrome" << endl;

    return 0;
}