#include <iostream.h>

int main() {
    int age;
    float height;
    char initial;
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height: ";
    cin >> height;

    cout << "Enter the first letter of your name: ";
    cin >> initial;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Initial: " << initial << endl;

    return 0;
}
