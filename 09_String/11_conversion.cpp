#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string str = "123";
    int num = stoi(str);
    cout << "String to integer: " << num << endl;  
    
   
    int value = 456;
    string strValue = to_string(value);
    cout << "Integer to string: " << strValue << endl;  
    
    return 0;
}
