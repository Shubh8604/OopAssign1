#include <iostream>
using namespace std;

int main() {
    char grade;
    int gradePoints;

    cout << "Enter your grade (A, B, C, D, or F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'a':
            gradePoints = 4;
            break;
        case 'B':
        case 'b':
            gradePoints = 3;
            break;
        case 'C':
        case 'c':
            gradePoints = 2;
            break;
        case 'D':
        case 'd':
            gradePoints = 1;
            break;
        case 'F':
        case 'f':
            gradePoints = 0;
            break;
        default:
            cout << "Invalid grade entered." << endl;
            return 1; 
    }

    cout << "Your grade points: " << gradePoints << endl;

    return 0;
}
