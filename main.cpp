#include <iostream>
#include <limits>
#include "fullTimeEmployee.h"
#include "partTimeEmployee.h"
int main()
{
    fullTimeEmployee newEmp("John", "Smith", 75, 56000, 5700);
    partTimeEmployee tempEmp("Bill", "Nielson", 275, 15.50, 57);
    newEmp.print();
    cout << endl;
    tempEmp.print();

    // prevents auto-close
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPress Enter to exit...";
    cin.get();

    return 0;
}