#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, i = 1;
    cout << "Enter a number: ";
    cin >> N;

    while (i <= N) {
        sum += i;
        i++;
    }
    cout << "Sum of first " << N << " natural numbers is: " << sum << endl;
    return 0;
}
