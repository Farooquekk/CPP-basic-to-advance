#include <iostream>
using namespace std;

class Shape {  // Abstract base class
    public:
        virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
    public:
        void draw() override {  // Must implement draw() in derived class
            cout << "Drawing Circle" << endl;
        }
};

class Square : public Shape {
    public:
        void draw() override {
            cout << "Drawing Square" << endl;
        }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->draw();  
    s2->draw();  

    delete s1;
    delete s2;

    return 0;
}
