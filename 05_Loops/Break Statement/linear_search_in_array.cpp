#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 12, 7, 20, 45, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target, i;
    
    cout << "Enter a number to search: ";
    cin >> target;
    
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Number " << target << " found at index " << i << endl;
            break;
        }
    }
    
    if (i == size)
        cout << "Number not found in the array" << endl;
    
    return 0;
}
