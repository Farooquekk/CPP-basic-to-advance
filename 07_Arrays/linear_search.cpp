#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 8, 12, 3, 9};
    int target = 12;
    int index = -1;

    // Linear search for the target element
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Element found at index: " << index << endl;  
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
