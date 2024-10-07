#include <iostream>
using namespace std;

int main() {
    
    int array3D[2][2][3] = {
        { {1, 2, 3}, {4, 5, 6} },
        { {7, 8, 9}, {10, 11, 12} }
    };

    
    cout << "Element at [1][0][2]: " << array3D[1][0][2] << endl;  
    return 0;
}
