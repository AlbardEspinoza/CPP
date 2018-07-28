#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Person one("Steve", "34231 Grover Street", 34, "619-567-3462");
    Person two("Michael", "45349 Marshall Avenue", 29, "619-543-45678");
    Person three("Susan", "97528 Rochester Boulevard", 38, "619-678-3421");

    cout << "Name: " << one.getName() << endl;
    cout << "Address: " << one.getAddress() << endl;
    cout << "Age: " << one.getAge() << endl;
    cout << "Phone Number: " << one.getPhoneNumber() << endl;

    cout << "\nName: " << two.getName() << endl;
    cout << "Address: " << two.getAddress() << endl;
    cout << "Age: " << two.getAge() << endl;
    cout << "Phone Number: " << two.getPhoneNumber() << endl;

    cout << "\nName: " << three.getName() << endl;
    cout << "Address: " << three.getAddress() << endl;
    cout << "Age: " << three.getAge() << endl;
    cout << "Phone Number: " << three.getPhoneNumber() << endl;

}