#include <iostream>
using namespace std;

int main() {
    int N, i = 1;
    cout << "Enter a number: ";
    cin >> N;

    do {
        cout << i << " ";
        i++;
    } while (i <= N);

    return 0;
}
