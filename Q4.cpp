#include <iostream>
using namespace std;

int main() {
    double salary, tax, netSalary;

    cout << "Enter your salary: ";
    cin >> salary;

    if (salary <= 50000) {
        tax = salary * 0.05;
    } else if (salary <= 100000) {
        tax = 50000 * 0.05 + (salary - 50000) * 0.1;
    } else if (salary <= 150000) {
        tax = 50000 * 0.05 + 50000 * 0.1 + (salary - 100000) * 0.15;
    } else {
        tax = 50000 * 0.05 + 50000 * 0.1 + 50000 * 0.15 + (salary - 150000) * 0.2;
    }

    netSalary = salary - tax;

    cout << "Income Tax: " << tax << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}

