#include <iostream>
using namespace std;


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  
}

int main() {
    int n = 6;  
    cout << "Fibonacci number " << n << " is: " << fibonacci(n) << endl;  
    return 0;
}
