#include <iostream>
using namespace std;
double averagemarks();
int main() {

	
	
	averagemarks();


	return 0;
}
double averagemarks() {
	cout << "Enter number of subjects" << '\n';
	int numofsub;
	float sum = 0;

	cin >> numofsub;
	cout << "Enter Marks of every subjects " << '\n';

	for (float i = 0; i < numofsub; i++) {

		float marks;
		cin >> marks;
		sum = sum + marks;
	}
	float avg = sum / numofsub;
	cout << "Average marks " << " = " << avg;
	return avg;
}
