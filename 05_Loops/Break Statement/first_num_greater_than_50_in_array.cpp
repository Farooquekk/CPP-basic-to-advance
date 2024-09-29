#include <iostream>
using namespace std;

int main() {
    int arr[] = {15, 22, 33, 50, 55, 10, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > 50) {
            cout << "First number greater than 50 is: " << arr[i] << endl;
            break;
        }
    }
    
    return 0;
}
