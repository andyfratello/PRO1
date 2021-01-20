#include <iostream>
#include <cmath>
using namespace std;

struct Fraction {
	int num, den;
};

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

void simplify(Fraction& f) {
	if (f.den > 1) {
		int mcd = gcd(f.num, f.den);
		f.num /= mcd;
		f.den /= mcd;
	}
}

Fraction addition(const Fraction& x, const Fraction& y) {
	Fraction f;
	f.den = x.den*y.den;
	f.num = x.num*y.den + y.num*x.den;
	return f;
}

int main() {
	Fraction aux;
	aux.num = 0;
	aux.den = 1;
	char c;
	bool calcula = true;
	Fraction f;
	while (calcula) {
		cin >> f.num >> c >> f.den >> c;
		if (c == '=') calcula = false;
		simplify(f);
		aux = addition(f, aux);
		simplify(aux);
	}
	cout << aux.num << '/' << aux.den << endl;
}
