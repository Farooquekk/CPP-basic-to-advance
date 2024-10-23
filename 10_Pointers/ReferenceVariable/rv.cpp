#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x;  // 'ref' is a reference to 'x'

    cout << "x = " << x << endl;  
    cout << "ref = " << ref << endl;  

    ref = 20;  // Changing the value through 'ref'
    cout << "After modifying ref: " << endl;
    cout << "x = " << x << endl; 
    cout << "ref = " << ref << endl; 

    return 0;
}
