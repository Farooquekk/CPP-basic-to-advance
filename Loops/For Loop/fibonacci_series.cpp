#include <iostream>
using namespace std;

int main() {
    int N, t1 = 0, t2 = 1, nextTerm;
    cout << "Enter the number of terms: ";
    cin >> N;

    cout << "Fibonacci Series: " << t1 << " " << t2 << " ";
    
    for (int i = 3; i <= N; i++) {
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
