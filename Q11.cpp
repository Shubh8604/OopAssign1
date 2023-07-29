#include <iostream>
using namespace std;

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    double totalMarks, percentage;

    cout << "Enter marks for Subject 1: ";
    cin >> subject1;

    cout << "Enter marks for Subject 2: ";
    cin >> subject2;

    cout << "Enter marks for Subject 3: ";
    cin >> subject3;

    cout << "Enter marks for Subject 4: ";
    cin >> subject4;

    cout << "Enter marks for Subject 5: ";
    cin >> subject5;

    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (totalMarks / 500) * 100;

    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}

