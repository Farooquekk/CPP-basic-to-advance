#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "Menu:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "You chose to add numbers" << endl;
            break;
        case 2:
            cout << "You chose to subtract numbers" << endl;
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
    
    return 0;
}
