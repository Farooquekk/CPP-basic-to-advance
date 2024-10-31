#include <iostream>
using namespace std;

class Print {
    public:
        void display(int i) {
            cout << "Integer: " << i << endl;
        }

        void display(double d) {
            cout << "Double: " << d << endl;
        }

        void display(string s) {
            cout << "String: " << s << endl;
        }
};

int main() {
    Print printer;
    printer.display(10);          // Calls display(int)
    printer.display(5.25);        // Calls display(double)
    printer.display("Hello");     // Calls display(string)
    return 0;
}
