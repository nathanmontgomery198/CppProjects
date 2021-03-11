#include <iostream>
using namespace std;

int main() {
	double a, b, result;
	char operation;

	do
	{
		cout << "Input your first number: ";
		cin >> a;
		cout << "Input the operation (+, -, *, /): ";
		cin >> operation;
		cout << "Input your second number: ";
		cin >> b;

		if (operation == '+')
		{
			result = a + b;
			cout << result << endl;
		}
		else if (operation == '-') {
			result = a - b;
			cout << result << endl;
		}
		else if (operation == '*') {
			result = a * b;
			cout << result << endl;
		}
		else if (operation == '/') {
			result = a / b;
			cout << result << endl;
		}
		else
		{
			cout << "That is not a valid operator, please try again!";
			system("pause");
		}

	} while (operation != 'e');
		return 0;
}