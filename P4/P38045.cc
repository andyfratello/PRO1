#include <iostream>
#include <cmath>
using namespace std;

void power(int n) {
	cout << n * n << ' ';
}

void squareroot(int n) {
	cout << sqrt(n) << endl;
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);
	int n;
	while (cin >> n) {
		power(n);
		squareroot(n);
	}
}
