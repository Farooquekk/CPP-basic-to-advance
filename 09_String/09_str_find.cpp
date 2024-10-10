#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "I like programming in C++";
    
   
    int pos = str.find("programming");
    
    if (pos != string::npos) {
        cout << "'programming' found at position: " << pos << endl;  
    } else {
        cout << "'programming' not found" << endl;
    }
    
    return 0;
}
