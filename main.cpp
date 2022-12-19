#include <iostream>
using namespace std;
int main() {
	int num1, num2, res;
	cout << "Enter number 1:" << endl;
	cin >> num1;
	cout << "Enter number 2:" << endl;
	cin >> num2;

	res = num1 + num2;
	cout << num1 << " + " << num2 << " = " << res << endl;
	res = num1 - num2;
	cout << num1 << " - " << num2 << " = " << res << endl;
	res = num1 * num2;
	cout << num1 << " * " << num2 << " = " << res << endl;

	cin.get();
	return 0;
}