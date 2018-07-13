#include <iostream>
#include <iomanip>

using namespace std;

void sort(double *, int);

double averageScore(double *, int);

int main() {
    int size;
    cout << "How many scores would you like to input into the program: ";
    cin >> size;

    double *scores = new double[size];

    for (int x = 0; x < size; x++) {
        cout << "Please enter the score for game " << x + 1 << ": ";
        cin >> *(scores + x);
        while (*(scores + x) < 0) {
            cout << "Please enter a non-negative value: ";
            cin >> *(scores + x);
        }
    }
    cout << "Sorted score list: " << endl;
    sort(scores, size);
    for (int x = 0; x < size; x++) {
        cout << *(scores + x) << endl;
    }
    cout << "\nThe average score for the games is: " << averageScore(scores, size);

}

void sort(double *score, int size) {
    int startScan, minIndex;
    double minValue;

    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minValue = score[startScan];
        for (int index = startScan + 1; index < size; index++) {
            if (score[index] < minValue) {
                minValue = score[index];
                minIndex = index;
            }
        }
        score[minIndex] = score[startScan];
        score[startScan] = minValue;
    }
}

double averageScore(double *scores, int size) {
    double sum;

    for (int x = 0; x < size; x++) {
        sum += *(scores);
        scores++;
    }
    return sum / size;
}
