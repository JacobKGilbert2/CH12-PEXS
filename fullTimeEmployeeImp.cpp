#include <iostream>
#include <string>
#include "fullTimeEmployee.h"
//Leave the Above code as is.  Paste and format your code for fullTimeEmployeeImp.cpp below this line
void fullTimeEmployee::set(string first, string last,
                            long id,
                            double salary, double bonus) {
    setName(first, last);
    setId(id);
    empSalary = salary;
    empBonus = bonus;
}
void fullTimeEmployee::setSalary(double salary) {
    empSalary = salary;
}
double fullTimeEmployee::getSalary() {
    return empSalary;
}
void fullTimeEmployee::setBonus(double bonus) {
    empBonus = bonus;
}
double fullTimeEmployee::getBonus() {
    return empBonus;
}
void fullTimeEmployee::print() const {
    cout << "Id: " << getId() << endl;
    cout << "Name: ";
    personType::print();
    cout << endl;
    cout << "Wages: $" << calculatePay() << endl;
}
double fullTimeEmployee::calculatePay() const {
    return empSalary + empBonus;
}
fullTimeEmployee::fullTimeEmployee(string first, string last,
                                    long id, double salary,
                                    double bonus)
                : employeeType(first, last, id) {
    empSalary = salary;
    empBonus = bonus;
}