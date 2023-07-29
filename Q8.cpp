#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << num1 << " is the greatest number." << endl;
    } else if (num2 > num1 && num2 > num3) {
        cout << num2 << " is the greatest number." << endl;
    } else if (num3 > num1 && num3 > num2) {
        cout << num3 << " is the greatest number." << endl;
    } else {
        cout << "The numbers are either all equal or some of them are equal." << endl;
    }

    return 0;
}

