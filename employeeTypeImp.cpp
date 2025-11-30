#include <iostream>
#include <string>
#include "employeeType.h"
//Leave the Above code as is.  Paste and format your code for employeeTypeImp.cpp below this line
void employeeType::setId(long id) {
    personId = id;
}
long employeeType::getId() const {
    return personId;
}
employeeType::employeeType(string first, string last, long id)
            : personType(first, last) {
    personId = id;
}