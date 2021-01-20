#include <iostream>
using namespace std;

int gcd(int x, int y) {
	while (x != 0 and y != 0) {
		int rem = x%y;
		x = y; 
		y = rem;
	}
	return x + y;
}

void read_rational(int& num, int& den) {
	char c;
	cin >> num >> c >> den;
	int mcd = gcd(num, den);
	num = num/mcd;
	den = den/mcd;
}

int main() {
    int num, den;
    read_rational(num, den);
    cout << num << ' ' << den << endl;
}
