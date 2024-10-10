#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "I like  C++";
    
   
    str.replace(7, 3, "Python");
    
    cout << str << endl;  
    
    return 0;
}
