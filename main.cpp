#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string gradeLetter;
    double grade;

    cout << "Enter a letter grade: ";
    cin >> gradeLetter;

    if (gradeLetter[0] >= 'A' && gradeLetter[0] <= 'F') {
        if (gradeLetter == "A") {
            grade = 4;
        } else if (gradeLetter == "A-") {
            grade = 3.7;
        } else if (gradeLetter == "B+") {
            grade = 3.3;
        } else if (gradeLetter == "B") {
            grade = 3.0;
        } else if (gradeLetter == "B-") {
            grade = 2.7;
        } else if (gradeLetter == "C+") {
            grade = 2.3;
        } else if (gradeLetter == "C") {
            grade = 2.0;
        } else if (gradeLetter == "C-") {
            grade = 1.7;
        } else if (gradeLetter == "D+") {
            grade = 1.3;
        } else if (gradeLetter == "D") {
            grade = 1.0;
        } else if (gradeLetter == "D-") {
            grade = 0.7;
        } else if (gradeLetter == "F") {
            grade = 0.0;
        }
        cout << setprecision(1) << fixed;
        cout << "The numeric value is " << grade;
    } else {
        cout << "Please enter a letter grade between A-F.";
    }
    char x = 'a';

}
