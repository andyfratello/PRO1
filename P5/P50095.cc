#include <iostream>
using namespace std;

int prime(int n) {
	bool is_prime = true;
	int i = 2;
	if (n < 2) is_prime = false;
	while (i*i <= n and is_prime) {
		if (n%i == 0) is_prime = false;
		++i;
	}
	return is_prime;
}

int main() {
	int n;
	cin >> n;
	while (prime(n)) {
		bool next = false;
		while (not next) {
			++n;
			next = prime(n);
		}
		cout << n << endl;
		cin >> n;
	}
}
