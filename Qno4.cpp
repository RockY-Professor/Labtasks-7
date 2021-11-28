///Write a function which swaps two integers variables Pass two variables as function arguments. Display results after swapping with in function body so return type of your function should be void.
#include <iostream>
using namespace std;
void swap();
void msg();
int main() {
    cout << "Enter Values to Swap " << '\n';

    int num1, num2;

    cin >> num1 >> num2;

    cout << "The Values are " << num1 << " and " << num2 << '\n';
    
    swap(num1, num2);
    cout << "The Swapped values are " << num1 << " and " << num2 << '\n';
    msg();
    return 0;
}
// Assuming numbers (4,6)
void swap(int &value1, int &value2) { // temp value1 value2
    int temp = value1;                //  4     4      6
    value1 = value2;                  //  4     6      6
    value2 = temp;                    //  4     6      4

}
void msg() {

    cout << "Why so EASY User! :)";
}
