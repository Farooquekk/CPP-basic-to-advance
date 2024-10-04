#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    int sum = 0;
    
    // Calculating the sum of all array elements
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    cout << "Sum of all elements: " << sum << endl; 
    return 0;
}
