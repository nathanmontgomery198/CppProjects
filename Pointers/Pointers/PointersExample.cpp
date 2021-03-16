#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 16;
	string name = "Nathan";

	cout << a << endl;
	cout << &a << endl; //using & before the variable will print out where that variable is stored
	cout << name << endl;
	cout << &name << endl;

	return 0;
}