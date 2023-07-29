#include <iostream>
using namespace std;

int main() {
    int totalDays;

    cout << "Enter the number of days: ";
    cin >> totalDays;

    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int weeks = remainingDays / 7;
    int remainingWeeks = remainingDays % 7;

    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Remaining Days: " << remainingWeeks << endl;

    return 0;
}

