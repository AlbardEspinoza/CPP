#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    float stockPrice, stockTotal = 0;
    int stockCount = 0, days = 1;

    cout << "In the following statement please enter the closing value of a stock\nin a certain number of days. "
            "When done enter '-1'.";

    do {
        cout << "Please enter the closing value for day 1: ";
        cin >> stockPrice;
        if (stockPrice == -1) {
            break;
        } else {
            stockCount++;
            days++;
            stockTotal += stockPrice;
        }
    } while (stockPrice != -1);

    if (stockPrice == -1 && days == 1) {
        cout << "No stock was entered.";
    } else {
        stockTotal /= stockCount;
        cout << setprecision(4) << fixed;
        cout << "The average closing price is: " << stockTotal;
    }

}
