#include <iostream>

using namespace std;

int a, b;

int main() {
	cin >> a;
	if (a >= 15) { // all numbers >= 15 works the same
		a = a / 10; // get first number
		b = a + 1; // get second number
		a = a * b; // get first part of full number
		cout << a << "25"; // first part of full number + "25" 
	}
	else {
		a *= a; // a = a * a
		cout << a;
	}
}