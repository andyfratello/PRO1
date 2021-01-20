#include <iostream>
using namespace std;

bool prime(int n) {
	if (n < 2) return false;
	for (int i = 2; i*i <= n; ++i) {
		if (n%i == 0) return false;
	}
	return true;
}

bool is_perfect_prime(int n) {
	if (not prime(n)) return false;
	int sum = 0;
	int count = 0;
	while (n != 0) {
		sum += n%10;
		n /= 10;
		++count;
	}
	bool prime_sum = prime(sum);
	if (count == 1 and prime_sum) return true;
	else if (prime_sum) return is_perfect_prime(sum);
	return false;
}

int main() {
	int n;
	while (cin >> n) {
		if (is_perfect_prime(n)) cout << "true";
		else cout << "false";
		cout << endl;
	}
}
