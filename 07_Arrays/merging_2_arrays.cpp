#include <iostream>
using namespace std;

int main() {
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int mergedArray[6];

    
    for (int i = 0; i < 3; i++) {
        mergedArray[i] = array1[i];
    }

   
    for (int i = 0; i < 3; i++) {
        mergedArray[i + 3] = array2[i];
    }

   
    cout << "Merged array: ";
    for (int i = 0; i < 6; i++) {
        cout << mergedArray[i] << " ";  
    }
    cout << endl;

    return 0;
}
