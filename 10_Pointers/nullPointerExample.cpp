#include <iostream>
using namespace std;

void printValue(int *ptr) {
    if (ptr != nullptr) {  // Check if the pointer is null
        cout << "Value: " << *ptr << endl;
    } else {
        cout << "Pointer is null." << endl;
    }
}

int main() {
    int x = 10;
    int *p1 = &x;   // Valid pointer
    int *p2 = nullptr;  // Null pointer

    printValue(p1);  
    printValue(p2);  

    return 0;
}
