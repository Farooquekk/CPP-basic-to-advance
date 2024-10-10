#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15};
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[2];

    if (ptr1 < ptr2) {
        cout << "ptr1 points to an earlier memory location than ptr2" << endl;
    }

    return 0;
}
