//Write a function that accepts an integer argument and tests it to be even or odd. The function returns true if the argument is even and false if the argument is odd. The return value should be of type bool. In main take an integer input from user and pass it to the function.  
#include <iostream>
using namespace std;
bool numcheck(int);
void msg();
int main() {

	int num;

	cout << " Enter Value to check whether the is Even or Odd " << "\n";

	cin>> num;

	bool check;

	check = numcheck(num);

	if (check) {

		cout << " The Number is Even " << num << "\n";
	}
	else {

		cout << " The Number is Odd " << num << "\n";

	}
	msg();

	return 0;
}

bool numcheck(int a) {

	bool b{};

	if (a % 2 == 0) {

		b = true;
	}
	else {

		b = false;
	}
	return b;
}

void msg() {

	cout << " Easy Peasy For me User! :)";
}
