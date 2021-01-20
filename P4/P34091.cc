#include <iostream>
using namespace std;

bool is_perfect(int n) {
	int sum = 1;
	int i = 2;
	while (i*i <= n) {
		if (n%i == 0) sum += i + n/i; 
		++i;
	}
	if (n != 0 and n != 1) return (n == sum);
	return false;
}

int main() {
	int n;
	while (cin >> n) {
		if (is_perfect(n)) cout << "true";
		else cout << "false";
		cout << endl;
	}
}
