#include <iostream>
using namespace std;

int main() {
    int N;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> N;

    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= N);

    cout << "Factorial of " << N << " is: " << factorial << endl;
    return 0;
}
