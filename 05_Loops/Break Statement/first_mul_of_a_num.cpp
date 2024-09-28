#include <iostream>
using namespace std;

int main() {
    int i = 1;
    
    while (i <= 100) {
        if (i % 3 == 0 && i % 7 == 0) {
            cout << "First multiple of both 3 and 7 between 1 and 100 is: " << i << endl;
            break;
        }
        i++;
    }
    
    return 0;
}
