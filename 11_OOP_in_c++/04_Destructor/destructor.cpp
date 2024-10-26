#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        // Constructor
        Rectangle(int l, int w) {
            length = l;
            width = w;
            cout << "Rectangle created." << endl;
        }

        // Destructor
        ~Rectangle() {
            cout << "Rectangle destroyed." << endl;
        }

        void display() {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

int main() {
    Rectangle rect(10, 5);
    rect.display();

    // Destructor will automatically be called when 'rect' goes out of scope
    return 0;
}
