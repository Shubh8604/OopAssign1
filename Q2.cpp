#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	
	cout<<"Enter Both Numbers : ";
	cin>>num1>>num2;
	cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    
    int temp = num1;
    num1 = num2;
    num2 = temp;

	cout << "After swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
	
	return 0;
}
