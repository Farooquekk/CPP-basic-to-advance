#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[1]; 
    int *ptr2 = &arr[4];  

   
    int difference = ptr2 - ptr1;
    cout << "Difference between ptr2 and ptr1: " << difference << endl; 

    return 0;
}
