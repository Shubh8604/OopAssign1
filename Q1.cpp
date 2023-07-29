#include <iostream>
using namespace std;
int main() {
    int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	
	//Addition
    int sum = num1 + num2;
    cout << num1 << " + " << num2 << " = " << sum << endl;

    // Subtraction
    int difference = num1 - num2;
    cout << num1 << " - " << num2 << " = " << difference << endl;

    // Division
    if (num2 != 0) {
        float quotient = static_cast<float>(num1) / num2;
        cout << num1 << " / " << num2 << " = " << quotient << endl;
    } else {
        cout << "Cannot divide by zero!" << endl;
    }

    // Modulus
    if (num2 != 0) {
        int remainder = num1 % num2;
        cout << num1 << " % " << num2 << " = " << remainder << endl;
    } else {
        cout << "Cannot perform modulus with zero!" << endl;
    }
    return 0;
}
