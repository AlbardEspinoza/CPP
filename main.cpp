#include <iostream>
#include <iomanip>

double bMembership(double);

double sMembership(double);

double pMembership(double);

using namespace std;

int main() {

    char x;
    double y;
    cout << "Wholesale Membership Rewards Calculator\n\n";
    cout << "1. Basic Membership\n2. Standard Membership\n3. Premium Membership\n4. Quit\nEnter your choice: ";
    cin >> x;
    cout << "Enter your monthly purchase total: $";
    cin >> y;

    while (x != '4') {
        double z;
        if (x == '1') {
            z = bMembership(y);
        }
    }

}

double bMembership(double x) {
    double y;
    if (x <= 100) {
        y = 0.1 * x;
    } else {
        y = 0.15 * x;
    }
    return y;
}

double sMembership(double x) {
    double y;
    if (x <= 100) {
        y = 0.15 * x;
    } else {
        y = 0.2 * x;
    }
    return y;
}

double pMembership(double x) {
    double y;
    if (x <= 100) {
        y = 0.2 * x;
    } else {
        y = 0.3 * x;
    }
    return y;
}