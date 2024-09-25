#include <iostream>
using namespace std;

int main() {
    int N, count = 0;
    cout << "Enter a number: ";
    cin >> N;

    while (N != 0) {
        N /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
    return 0;
}
