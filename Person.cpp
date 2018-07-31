//
// Created by Albard Espinoza Aldaco on 7/27/18.
//

#include "Person.h"
#include <string>

using namespace std;

Person::Person(string name, string address, int age, string phone_number) {
    this->name = name;
    this->address = address;
    this->age = age;
    this->phone_number = phone_number;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setAddress(string address) {
    this->address = address;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::setPhoneNumber(string phone_number) {
    this->phone_number = phone_number;
}

string Person::getName() const {
    return this->name;
}

string Person::getAddress() const {
    return this->address;
}

int Person::getAge() const {
    return this->age;
}

string Person::getPhoneNumber() const {
    return this->phone_number;
}
