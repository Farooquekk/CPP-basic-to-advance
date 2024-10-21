#include <iostream>
using namespace std;

// Function to print an integer or double using void pointer
void print(void *ptr, char type) {
    if (type == 'i') {
        cout << "Integer value: " << *(static_cast<int*>(ptr)) << endl;
    } else if (type == 'd') {
        cout << "Double value: " << *(static_cast<double*>(ptr)) << endl;
    }
}

int main() {
    int x = 100;
    double y = 200.5;

    print(&x, 'i');   
    print(&y, 'd');   
    return 0;
}
