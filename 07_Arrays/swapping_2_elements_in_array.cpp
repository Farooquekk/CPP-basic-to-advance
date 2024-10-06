#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    int index1 = 1;  
    int index2 = 3;  
  
    cout << "Original array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    
    int temp = numbers[index1];
    numbers[index1] = numbers[index2];
    numbers[index2] = temp;

    cout << "Array after swapping: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " "; 
    }
    cout << endl;

    return 0;
}
