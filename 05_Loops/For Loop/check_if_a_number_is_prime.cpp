#include <iostream>
using namespace std;

int main() {
    int N, flag = 0;
    cout << "Enter a number: ";
    cin >> N;

    if (N <= 1) {
        cout << "Not a prime number" << endl;
        return 0;
    }

    for (int i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0)
        cout << N << " is a prime number" << endl;
    else
        cout << N << " is not a prime number" << endl;

    return 0;
}
