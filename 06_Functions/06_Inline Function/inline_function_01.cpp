#include <iostream>
using namespace std;

// Inline function Definition
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    cout << "Square of " << num << " is: " << square(num) << endl;
    return 0;
}
