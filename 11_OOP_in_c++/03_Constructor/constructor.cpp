#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        // Default Constructor
        Rectangle() {
            length = 0;
            width = 0;
        }

        // Parameterized Constructor
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }

        // Display dimensions
        void display() {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

int main() {
    Rectangle rect1;               
    Rectangle rect2(10, 5);         

    rect1.display();
    rect2.display();

    return 0;
}
