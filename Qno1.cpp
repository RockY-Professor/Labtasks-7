// Qno1 Write a function which calculates & returns area of the circle. Radius should be your function
//parameter.Take appropriate data types
#include <iostream>
#include <cmath>
using namespace std;
float area(float);
void msg();
int main() {

	cout << "Enter Radius to to calculate area of circle " << '\n';
	float rad;// Actual Parameter.
	cin >> rad;
	cout << "The Area is " << area(rad);
	//area is the function.
	msg();
	return 0;
}
//variable r is taking value from actual parameter.
float area(float r) {

	float formula;
	formula = 3.14 * pow(r, 2);
	return formula; //returning formula.
}
void msg() {

	cout << "\nEasy for me User :) ";
 }
