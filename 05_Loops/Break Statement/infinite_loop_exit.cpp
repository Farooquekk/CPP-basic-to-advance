#include <iostream>
using namespace std;

int main() {
    int counter = 0;
    
    while (true) {
        counter++;
        cout << "Counter: " << counter << endl;
        
        if (counter == 5) {
            cout << "Breaking the loop when counter is 5" << endl;
            break;
        }
    }
    
    return 0;
}
