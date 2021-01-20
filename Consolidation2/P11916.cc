#include <iostream>
using namespace std;

double factorial(double i) {
	if (i == 0) return 1;
	return i*factorial(i-1);
}

int main() {
	cout.setf(ios::fixed);
    cout.precision(10);
	double n;
	while (cin >> n) {
		cout << "With " << int(n) << " term(s) we get ";
		if (n == 0) cout << n;
		else {
			double sum = 0;
			for (double i = 0; i < n; ++i) {
				sum += (1/factorial(i));
			}
			cout << sum;
		}
		cout << '.' << endl;
	}
}
