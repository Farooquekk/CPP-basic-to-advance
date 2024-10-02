#include <iostream>
using namespace std;

void increment(int &n) {   // Parameter passed by reference using &
    n++;                   // Modifies the original value
}

int main() {
    int num = 5;
    increment(num);         // Pass 'num' by reference
    cout << "Num after increment: " << num << endl;  // Output: 6
    return 0;
}
