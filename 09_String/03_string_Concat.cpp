#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "Farooque";
    string lastName = "Sajjad";
    
    // Using + operator
    string fullName = firstName + " " + lastName;
    
    cout << "Full Name: " << fullName << endl;  
    
    // Using append()
    string fullNameAppend = firstName.append(" ").append(lastName);
    
    cout << "Full Name using append: " << fullNameAppend << endl;  
    
    return 0;
}
