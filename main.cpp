#include <iostream>
#include <string>

using namespace std;


struct Car {
    string manufacturer, model;
    int yearOfSale;
    double salePrice;
};

void choice1(Car [], int);

void choice2(Car [], int);

void choice3(Car [], int);


int main() {

    int numCars;

    cout << "How many cars would like to input? ";
    cin >> numCars;
    while (numCars <= 0) {
        cout << "Please enter a positive amount of cars: ";
        cin >> numCars;
    }

    Car x[numCars];
    char choice;
    int car = 0;

    cout << "Please select a choice from the menu: " << endl;
    cout << "\n1. Enter car sale information" << endl;
    cout << "2. Change car sale information" << endl;
    cout << "3. Print car sale information" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    while (choice != '4') {
        while (choice < '1' || choice > '4') {
            cout << "PLease enter a choice displayed in the menu the menu: ";
            cin >> choice;
        }


        switch (choice) {
            case '1':
                if (car >= numCars) {
                    cout << "You can no longer add cars into the program." << endl;
                } else {
                    choice1(x, car);
                    car++;
                }
                break;
            case '2':
                choice2(x, car);
                break;
            case '3':
                choice3(x, car);
                break;
        }
        cout << "\n\nPlease select a choice from the menu: " << endl;
        cout << "\n1. Enter car sale information" << endl;
        cout << "2. Change car sale information" << endl;
        cout << "3. Print car sale information" << endl;
        cout << "4. Search for information" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;
    }
}

void choice1(Car x[], int num) {
    cout << "Please enter the following information for car " << num + 1 << ": " << endl;
    cout << "\nCar Manufacturer: ";
    cin >> x[num].manufacturer;
    cout << "Car Model: ";
    cin >> x[num].model;
    cout << "Year of sale: ";
    cin >> x[num].yearOfSale;
    while (x[num].yearOfSale <= 1950) {
        cout << "Please enter a year after 1950: ";
        cin >> x[num].yearOfSale;
    }
    cout << "Sale Price: ";
    cin >> x[num].salePrice;
    while (x[num].salePrice < 0) {
        cout << "PLease enter a non-negative sale price: ";
        cin >> x[num].salePrice;
    }
}

void choice2(Car x[], int num) {
    if (num == 0) {
        cout << "\nNo car has been entered into the program.";
    } else {
        int y;
        cout << "Please enter the car number that you would like to change: ";
        cin >> y;
        while (y > num) {
            cout << "Please enter a value that is within the range of cars entered in the program: ";
            cin >> y;
        }
        choice1(x, y - 1);
    }
}

void choice3(Car x[], int num) {
    if (num == 0) {
        cout << "\nNo car has been entered into the program.";
    } else {
        int y;
        cout << "Which car information would you like to print: ";
        cin >> y;
        while (y > num) {
            cout << "Please enter a value that is within the range of cars entered in the program: ";
            cin >> y;
        }
        y--;
        cout << "Car Manufacturer: " << x[y].manufacturer << endl;
        cout << "Car Model: " << x[y].model << endl;
        cout << "Year of Sale: " << x[y].yearOfSale << endl;
        cout << "Sale price: " << x[y].salePrice;
    }

}



