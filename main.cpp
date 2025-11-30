#include <iostream>
#include "fullTimeEmployee.h"
#include "partTimeEmployee.h"
int main()
{
    fullTimeEmployee newEmp("John", "Smith", 75, 56000, 5700);
    partTimeEmployee tempEmp("Bill", "Nielson", 275, 15.50, 57);
    newEmp.print();
    cout << endl;
    tempEmp.print();
    return 0;
}