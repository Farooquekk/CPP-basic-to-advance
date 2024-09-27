#include <iostream>
using namespace std;

int main() {
    int N, count = 0;
    cout << "Enter a number: ";
    cin >> N;

    do {
        N /= 10;
        count++;
    } while (N != 0);

    cout << "Number of digits: " << count << endl;
    return 0;
}
