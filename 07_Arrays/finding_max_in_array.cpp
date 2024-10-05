#include <iostream>
using namespace std;

int main() {
    int numbers[] = {3, 5, 7, 2, 8, 6, 4, 10};
    int maxNum = numbers[0];  // Assume first Element is the largest

   
    for (int i = 1; i < 8; i++) {
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
    }

    cout << "Maximum element is: " << maxNum << endl;  

    return 0;
}
