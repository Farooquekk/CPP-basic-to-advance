#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 8, 12, 5, 22, 8, 14, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int skipValue = 8;

    for (int i = 0; i < size; i++) {
        if (arr[i] == skipValue) {
            continue;  // Skip elements equal to 8
        }
        cout << arr[i] << " ";
    }

    return 0;
}
