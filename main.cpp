#include <iostream>
#include <iomanip>

using namespace std;

void displayArray(int [], int);

double getAverage(int [], int);

int main() {

    int arr[5];

    cout << "Please enter the scores of the 5 days." << endl;

    for (int x = 0; x < 5; x++) {
        cout << "Enter the score for day " << x + 1 << ": ";
        cin >> arr[x];
    }

    cout << "The points of each day are: " << endl;
    displayArray(arr, 5);
    cout << "The average points of the 5 days are: " << endl;
    cout << setprecision(2) << fixed;
    cout << getAverage(arr, 5);

}

void displayArray(int points[], int numElements) {
    for (int x = 0; x < numElements; x++) {
        cout << "Score for day " << x + 1 << ": " << points[x] << endl;
    }
}

double getAverage(int points[], int numElements) {
    double total;
    for (int x = 0; x < numElements; x++) {
        total += points[x];
    }
    return total / numElements;
}
