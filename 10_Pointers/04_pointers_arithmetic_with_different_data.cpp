#include <iostream>
using namespace std;

int main() {
    int intArr[] = {1, 2, 3, 4};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4};

    int *intPtr = intArr;       
    double *doublePtr = doubleArr;  
  
    intPtr++;
    cout << "After incrementing intPtr: " << *intPtr << endl;  

   
    doublePtr++;
    cout << "After incrementing doublePtr: " << *doublePtr << endl;  

    return 0;
}
