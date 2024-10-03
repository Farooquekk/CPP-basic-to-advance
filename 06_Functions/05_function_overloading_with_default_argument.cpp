#include <iostream>
using namespace std;

void display(int a, int b = 0) {  // Function with a default argument
    cout << "a: " << a << ", b: " << b << endl;
}

int main() {
    display(5);       
    display(5, 10);  
    return 0;
}
