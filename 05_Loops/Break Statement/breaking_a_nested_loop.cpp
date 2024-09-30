#include <iostream>
using namespace std;

int main() {
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {5, 10, 15, 50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    bool found = false;
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] + arr2[j] == 50) {
                cout << "Found a pair: " << arr1[i] << " + " << arr2[j] << " = 50" << endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }
    
    if (!found)
        cout << "No pair found that sums to 50" << endl;
    
    return 0;
}
