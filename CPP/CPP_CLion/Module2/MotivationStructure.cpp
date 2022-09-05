// This program motivates the need for structures.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



int main()
{

    int empNumber;    // Employee number
    string name;		 // Employee's name
    double hours;     // Hours worked
    double payRate;   // Hourly payRate
    double grossPay;  // Gross Pay

    // Get the employee's number.
    cout << "Enter the employee's number: ";
    cin >> empNumber;

    // Get the employee's name.
    cout << "Enter the employee's name: ";
    cin.ignore();	// To skip the remaining '\n' character
    getline(cin, name);

    // Get the hours worked by the employee.
    cout << "How many hours did the employee work? ";
    cin >> hours;

    // Get the employee's hourly pay rate.
    cout << "What is the employee's hourly payRate? ";
    cin >> payRate;

    // Calculate the employee's gross pay.
    grossPay = hours * payRate;

    // Display the employee data.
    cout << "Here is the employee's payroll data:\n";
    cout << "name: " << name << endl;
    cout << "Number: " << empNumber << endl;
    cout << "hours worked: " << hours << endl;
    cout << "Hourly payRate: " << payRate << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Gross Pay: $" << grossPay << endl;
    return 0;
}