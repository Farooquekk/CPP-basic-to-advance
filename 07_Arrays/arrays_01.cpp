#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of size 5
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access array elements
    cout << "First element: " << numbers[0] << endl;   
    cout << "Second element: " << numbers[1] << endl;  

    // Modify an array element
    numbers[2] = 100;
    cout << "Modified third element: " << numbers[2] << endl;  

    // Loop tHrough the array
    cout << "All elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";  
    }
    cout << endl;

    return 0;
}
