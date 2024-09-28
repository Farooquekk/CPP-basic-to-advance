#include <iostream>
using namespace std;

int main() {
    int N;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> N;

    int i = 1;
    while (i <= N) {
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << N << " is: " << factorial << endl;
    return 0;
}
