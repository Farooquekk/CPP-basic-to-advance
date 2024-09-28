#include <iostream>
using namespace std;

int main() {
    int N, t1 = 0, t2 = 1, nextTerm = 0, i = 1;
    cout << "Enter the number of terms: ";
    cin >> N;

    cout << "Fibonacci Sequence: " << t1 << " " << t2 << " ";

    do {
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
        i++;
    } while (i <= N - 2);

    return 0;
}
