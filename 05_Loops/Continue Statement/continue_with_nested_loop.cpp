#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == j) {
                continue;  // Skip pairs where both numbers are equal
            }
            cout << "(" << i << ", " << j << ")" << " ";
        }
        cout << endl;
    }

    return 0;
}
