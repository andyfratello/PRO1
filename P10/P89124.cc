#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve_of_eratosthenes(int n) {
	vector<bool> v(n + 1, true);
	for (int i = 2; i <= n; ++i) {
		for (int j = i*2; j <= n; j += i) v[j] = false;
	}
	return v;
}

int main() {
	int n;
	vector<bool> v = sieve_of_eratosthenes(1000000);
	while (cin >> n) {
		if (n == 0 or n == 1 or not v[n]) cout << n << " is not prime" << endl;
		else cout << n << " is prime" << endl;
	}
}
