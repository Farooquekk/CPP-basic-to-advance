#include <iostream>
using namespace std;

int main() {
    int N;
    long long factorial = 1; 
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << N << " is: " << factorial << endl;
    return 0;
}
