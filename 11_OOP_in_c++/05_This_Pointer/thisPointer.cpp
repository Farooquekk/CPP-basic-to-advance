#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        // Parameterized Constructor
        Rectangle(int length, int width) {
            this->length = length;  // 'this->' clarifies data members from parameters
            this->width = width;
        }

        void display() {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

int main() {
    Rectangle rect(15, 8);
    rect.display();

    return 0;
}
