#include <iostream>
using namespace std;

int main() {
    string str;
    int i = 0, count = 0;
    cout << "Enter a string: ";
    getline(cin, str);

    while (i < str.length()) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        i++;
    }

    cout << "Number of
