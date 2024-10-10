#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Apple";
    string str2 = "Banana";
    
   
    if (str1 == str2) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;  
    }
    
   
    if (str1.compare(str2) < 0) {
        cout << str1 << " comes before " << str2 << endl;  
    }
    
    return 0;
}
