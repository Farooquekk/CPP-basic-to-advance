#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  

   
    cout << "Pointer points to: " << *ptr << endl;  

   
    ptr++;
    cout << "After increment, pointer points to: " << *ptr << endl;  

    
    ptr += 2;
    cout << "After adding 2, pointer points to: " << *ptr << endl;  

    
    ptr--;
    cout << "After decrement, pointer points to: " << *ptr << endl;  

    return 0;
}
