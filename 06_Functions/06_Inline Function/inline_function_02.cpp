#include <iostream>
using namespace std;

inline int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);  // Recursive call, likely not inlined
}

int main() {
    cout << "Factorial of 5: " << factorial(5) << endl;
    return 0;
}
