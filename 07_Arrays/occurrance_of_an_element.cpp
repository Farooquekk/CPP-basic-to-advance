#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 3, 5, 3, 6};
    int target = 3;
    int count = 0;

    
    for (int i = 0; i < 8; i++) {
        if (numbers[i] == target) {
            count++;
        }
    }

    cout << "Number " << target << " appears " << count << " times." << endl;  

    return 0;
}
