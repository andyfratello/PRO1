#include <iostream>
#include <cmath>
using namespace std;

void sine(double n) {
	cout << sin(n * (M_PI/180.0)) << ' ';
}

void cosine(double n) {
	cout << cos(n * (M_PI/180.0)) << endl;
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);
	double n;
	while (cin >> n) {
		sine(n);
		cosine(n);
	}
}
