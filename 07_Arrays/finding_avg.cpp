#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;
    int size = 5;

   
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

   
    double average = (double)sum / size;

    cout << "The average is: " << average << endl; 

    return 0;
}
