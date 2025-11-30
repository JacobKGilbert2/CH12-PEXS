#include <iostream>
#include <string>
#include "personType.h"
using namespace std;
//Leave the Above code as is.  Paste and format your code for personTypeImp.cpp below this line
void personType::print() const {
    cout << firstName << " " << lastName;
}
void personType::setName(string first, string last) {
    firstName = first;
    lastName = last;
}
string personType::getFirstName() const {
    return firstName;
}
string personType::getLastName() const {
    return lastName;
}
//constructor
personType::personType(string first, string last) {
    firstName = first;
    lastName = last;
}