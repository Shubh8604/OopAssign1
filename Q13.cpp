#include <iostream>
#include <cmath>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int n = 0;
    while (num > 0) {
        num /= 10;
        n++;
    }
    num = originalNum;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return sum == originalNum;
}

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int multiplicationOfDigits(int num) {
    int result = 1;
    while (num > 0) {
        result *= num % 10;
        num /= 10;
    }
    return result;
}

int main() {
    int choice, num;

    do {
        cout << "Menu:" << endl;
        cout << "1. Sum of Digits" << endl;
        cout << "2. Armstrong or Not" << endl;
        cout << "3. Palindrome or Not" << endl;
        cout << "4. Multiplication of Digits" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> num;
                cout << "Sum of digits: " << sumOfDigits(num) << endl;
                break;
            case 2:
                cout << "Enter a number: ";
                cin >> num;
                if (isArmstrong(num))
                    cout << num << " is an Armstrong number." << endl;
                else
                    cout << num << " is not an Armstrong number." << endl;
                break;
            case 3:
                cout << "Enter a number: ";
                cin >> num;
                if (isPalindrome(num))
                    cout << num << " is a palindrome number." << endl;
                else
                    cout << num << " is not a palindrome number." << endl;
                break;
            case 4:
                cout << "Enter a number: ";
                cin >> num;
                cout << "Multiplication of digits: " << multiplicationOfDigits(num) << endl;
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}

