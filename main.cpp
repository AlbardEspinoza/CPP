#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    char gradeLetter[2];
    float grade;

    cout << "Enter a letter grade between A-F: ";
    cin >> gradeLetter;

    if (gradeLetter == "A") {
        grade = 4.0;
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
    }


}