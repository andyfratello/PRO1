#include <iostream>
using namespace std;

int prime(int x) {
	int i = 2;
	bool is_prime = true;
	while (i*i <= x and is_prime) {
		if (x%i == 0) is_prime = false;
		++i;
	}
	return is_prime;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		cout << x << " is ";
		if (x > 1 and prime(x)) cout << "prime";
		else cout << "not prime";
		cout << endl;
	}
}
