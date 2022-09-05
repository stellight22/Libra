// This program motivates the need for structures.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Employee
        {
    int empNumber;    // Employee number
    string name;		 // Employee's name
    double hours;     // Hours worked
    double payRate;   // Hourly payRate
    double grossPay;  // Gross Pay
};

int main()
{

    Employee emp1;

    // Get the employee's number.
    cout << "Enter the employee's number: ";
    cin >> emp1.empNumber;

    // Get the employee's name.
    cout << "Enter the employee's name: ";
    cin.ignore();	// To skip the remaining '\n' character
    getline(cin, emp1.name);

    // Get the hours worked by the employee.
    cout << "How many hours did the employee work? ";
    cin >> emp1.hours;

    // Get the employee's hourly pay rate.
    cout << "What is the employee's hourly payRate? ";
    cin >> emp1.payRate;

    // Calculate the employee's gross pay.
    emp1.grossPay = emp1.hours * emp1.payRate;

    // Display the employee data.
    cout << "Here is the employee's payroll data:\n";
    cout << "name: " << emp1.name << endl;
    cout << "Number: " << emp1.empNumber << endl;
    cout << "hours worked: " << emp1.hours << endl;
    cout << "Hourly payRate: " << emp1.payRate << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Gross Pay: $" << emp1.grossPay << endl;
    return 0;
}