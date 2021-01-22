#include <iostream>
using namespace std;

int main() {
	do {
		float num1; float num2; string input_numt; 
		cout << "\nnum1: "; cin >> num1;
		cout << "\nnum2: "; cin >> num2;
		cout << "\n+, -, *, /: "; cin >> input_numt;
		if (input_numt == "+") {
			int plus_num = num1 + num2;
			cout << "\n" <<  num1 << " + " << num2 << " = " << plus_num << "\n";
		} else if (input_numt == "-") {
			int min_num = num1 - num2;
			cout << "\n" << num1 << " - " << num2 << " = " << min_num << "\n";
		} else if (input_numt == "*") {
			int multiply_num = num1 * num2;
			cout << "\n" << num1 << " * " << num2 << " = " << multiply_num << "\n";
		} else if (input_numt == "/") {
			int divide_num = num1 / num2;
			cout << "\n" << num1 << " / " << num2 << " = " << divide_num << "\n";
		} else {
			exit(1);
		}
	} while (true);
	return 0;
}
