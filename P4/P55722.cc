#include <iostream>
using namespace std;

int number_of_digits(int n) {
	int count = 0;
	if (n == 0) ++count;
	while (n != 0) {
		n /= 10;
		++count;
	}
	return count;
}

int main() {
	int n;
	while (cin >> n) {
		cout << number_of_digits(n) << endl;
	}
}
