#include <iostream>
using namespace std;

// class Declaration
class Rectangle {
    //  (attributes)
    private:
        int length;
        int width;

    public:
        // Constructor
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }

        // Member function --> to calculate area
        int getArea() {
            return length * width;
        }

        // Member function --> to display dimensions
        void displayDimensions() {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

// Main function
int main() {
    // Creating an object of the class Rectangle
    Rectangle rect(10, 5);

    // Accessing member functions
    rect.displayDimensions();
    cout << "Area of rectangle: " << rect.getArea() << endl;

    return 0;
}
