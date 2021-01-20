#include <iostream>
#include <cmath>
using namespace std;

struct Rational {
	int num, den;
};

int gcd(int a, int b) {
	if (a < b) {
		int aux = a;
		a = b;
		b = aux;
	}
	if (a < 0) a *= -1;
	if (b < 0) b *= -1;
	int r = a%b;
	while (r > 0) {
		a = b;
		b = r;
		r = a%b;
	}
	return b;
}

Rational rational(int n, int d) {
	Rational r;
	int gcdiv = 1;
	if (n != 0) gcdiv = gcd(n, d);
	n /= gcdiv;
	d /= gcdiv;
	if (n == 0) d = 1;
	if (d < 0) {
		d *= -1;
		n *= -1;
	}
	r.num = n;
	r.den = d;
	return r;
}

int main() {
	int num, den;
	while (cin >> num >> den) {
		Rational r = rational(num, den);
		cout << r.num << ' ' << r.den << endl;
	}
}
