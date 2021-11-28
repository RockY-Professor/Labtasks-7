//Write a function that receives integer base and exponent as function arguments and calculates the result of the expression and return results to main function and display on console. result=Base ^ exponent  
#include <iostream>
using namespace std;
int pow(int , int);
void msg();
int main() {

	int base, exponent;

	cout << " Enter Base User! " << "\n";

	cin >> base;

	cout << " Enter Exponent User! " << "\n";

	cin >> exponent;

	cout << " " << base << "^" << exponent << "=" << pow(base, exponent) << "\n";
	msg();

	return 0;
}

int pow(int b, int e) {

	int x = 1;

	for (int i = 0; i < e; i++) {

		x = x * b;
	}

	return x;
}
void msg() {
	
	cout << " This is EASY for me User! :) ";

}
