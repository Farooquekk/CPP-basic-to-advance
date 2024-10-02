#include <iostream>
using namespace std;

int compare(int a, int b) {
    if (a > b) {
        return 1;  // If a is greater than b
    } else if (a < b) {
        return -1; // If a is less than b
    } else {
        return 0;  // If a and b are equal
    }
}

int main() {
    cout << "Compare 5 and 3: " << compare(5, 3) << endl;  
    cout << "Compare 3 and 5: " << compare(3, 5) << endl;  
    cout << "Compare 4 and 4: " << compare(4, 4) << endl;  
    return 0;
}
