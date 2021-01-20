#include <iostream>
using namespace std;

int number_of_digits(int n) {
	if (n < 10) return 1;
	return 1 + number_of_digits(n/10);
}

int main() {
	int n;
	while (cin >> n) {
		cout << number_of_digits(n) << endl;
	}
}
