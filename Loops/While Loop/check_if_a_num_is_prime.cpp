#include <iostream>
using namespace std;

int main() {
    int N, i = 2, flag = 0;
    cout << "Enter a number: ";
    cin >> N;

    if (N <= 1) {
        cout << "Not a prime number" << endl;
        return 0;
    }

    while (i <= N / 2) {
        if (N % i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
        cout << N << " is a prime number" << endl;
    else
        cout << N << " is not a prime number" << endl;

    return 0;
}
