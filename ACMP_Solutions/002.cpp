#include <iostream>

using namespace std;

int x, y, z;

int main() {
	cin >> x;

	if (x > 0) { // important check, because we must consider negative numbers and positive numbers
		for (int i = 1; i <= x; i++) { // i = 1, because from 1 to N
			z += i;
		}
		cout << z;
	}
	else { // x < 0
		for (int i = 1; i >= x; i--) { // i = 1, because from 1 to N, and here we consider negative numbers 
			z += i;
		}
		cout << z;
	}
}
