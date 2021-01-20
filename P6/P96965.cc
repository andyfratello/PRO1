#include <iostream>
using namespace std;

int sum_of_digits(int x) {
	int sum = 0;
	while (x != 0) {
		sum += x%10;
		x /= 10;
	}
	return sum;
}

int reduction_of_digits(int x) {
	int sum = sum_of_digits(x);
	if (sum >= 10) return reduction_of_digits(sum);
	return sum;
}

int main() {
	int n;
	while (cin >> n) {
		cout << reduction_of_digits(n) << endl;
	}
}
