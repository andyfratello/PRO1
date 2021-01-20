#include <iostream>
using namespace std;

int factorial(int n) {
	int p = 1;
	if (n == 0) return 1;
	else {
		while (n != 0) {
			p *= n;
			--n;
		}
	}
	return p;
}

int main() {
	int n;
	while (cin >> n) {
		cout << factorial(n) << endl;
	}
}
