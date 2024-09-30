#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            continue;  
        }
        cout << i << " ";
    }

    return 0;
}
