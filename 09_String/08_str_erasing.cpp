#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "C++ programming is fun";
    
    
    str.erase(4, 12);
    
    cout << str << endl;  
    
    return 0;
}
