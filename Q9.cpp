#include <iostream>
using namespace std;

int main() {
    int numTerms;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> numTerms;

    int firstTerm = 0, secondTerm = 1;
    int nextTerm;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < numTerms; ++i) {
        if (i <= 1)
            nextTerm = i;
        else {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
        cout << nextTerm << " ";
    }

    cout << endl;

    return 0;
}

