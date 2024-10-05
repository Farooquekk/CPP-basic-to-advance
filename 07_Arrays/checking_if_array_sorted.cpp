#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    bool isSorted = true;

   
    for (int i = 0; i < 6; i++) {
        if (numbers[i] > numbers[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "The array is sorted." << endl;  
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
