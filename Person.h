//
// Created by Albard Espinoza Aldaco on 7/27/18.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <string>

using namespace std;

class Person {

private:
    string name;
    string address;
    int age;
    string phone_number;
public:
    Person(string, string, int, string);

    void setName(string);

    void setAddress(string);

    void setAge(int);

    void setPhoneNumber(string);

    string getName() const;

    string getAddress() const;

    int getAge() const;

    string getPhoneNumber() const;
};


#endif //UNTITLED_PERSON_H
