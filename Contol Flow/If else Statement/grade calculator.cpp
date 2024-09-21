#include <iostream.h>

int main() {
    int score;

    // Taking user input for the score
    cout << "Enter your score (0-100): ";
    cin >> score;

    // Control flow to determine the grade
    if (score >= 90 && score <= 100) {
        cout << "Your grade is A" << endl;
    } 
    else if (score >= 80 && score < 90) {
        cout << "Your grade is B" << endl;
    } 
    else if (score >= 70 && score < 80) {
        cout << "Your grade is C" << endl;
    } 
    else if (score >= 60 && score < 70) {
        cout << "Your grade is D" << endl;
    } 
    else if (score >= 0 && score < 60) {
        cout << "Your grade is F" << endl;
    } 
    else {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
    }

    return 0;
}
