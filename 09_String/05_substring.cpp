#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "C++ Programming";
    
   
    string sub = str.substr(4, 11);
    
    cout << "Substring: " << sub << endl;  
    
    return 0;
}
