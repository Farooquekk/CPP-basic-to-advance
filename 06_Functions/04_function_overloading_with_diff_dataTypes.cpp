#include <iostream>
using namespace std;


int square(int x) {
    return x * x;
}


double square(double x) {
    return x * x;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;         
    cout << "Square of 5.5: " << square(5.5) << endl;     
    return 0;
}
