#include <iostream>
using namespace std;

int main() {
    int numbers[] = {12, 45, 2, 34, 18, 9};
    int minNum = numbers[0];  

   
    for (int i = 1; i < 6; i++) {
        if (numbers[i] < minNum) {
            minNum = numbers[i];
        }
    }

    cout << "Smallest element is: " << minNum << endl;  

    return 0;
}
