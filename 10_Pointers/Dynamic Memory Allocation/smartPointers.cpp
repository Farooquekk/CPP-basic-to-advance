#include <iostream>
#include <memory>
using namespace std;

int main() {
    // Using unique_ptr for dynamic memory allocation
    unique_ptr<int> ptr = make_unique<int>(10);

    cout << "Value: " << *ptr << endl;

    // No need to manually delete --> b/c unique_ptr automatically deletes memory
    return 0;
}
