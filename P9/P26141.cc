#include <iostream>
#include <cmath>
using namespace std;

struct Rational {
	int num, den;
};

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

Rational rational(Rational& r) {
	int mcd = gcd(r.num, r.den);
	Rational res;
	res.num = r.num/mcd;
	res.den = r.den/mcd;
	if (res.den < 0) {
		res.den *= -1;
		res.num *= -1;
	}
	return res;
}

Rational suma(Rational& a, Rational& b) {
	Rational r;
	r.den = a.den*b.den;
	r.num = a.num*b.den + b.num*a.den;
	return rational(r);
}

Rational resta(Rational& a, Rational& b) {
	Rational r;
	r.den = a.den*b.den;
	r.num = a.num*b.den - b.num*a.den;
	return rational(r);
}

Rational multiplica(Rational& a, Rational& b) {
	Rational r;
	r.num = a.num*b.num;
	r.den = a.den*b.den;
	return rational(r);
}

Rational divideix(Rational& a, Rational& b) {
	Rational r;
	r.num = a.num*b.den;
	r.den = a.den*b.num;
	return rational(r);
}

int main() {
	Rational r;
	cin >> r.num >> r.den;
	r = rational(r);
	if (r.num == 0) cout << 0 << endl;
	else if (r.den == 1) cout << r.num << endl;
	else cout << r.num << '/' << r.den << endl;
	string s;
	while (cin >> s) {
		Rational a;
		if (s == "suma") {
			cin >> a.num >> a.den;
			r = suma(r, a);
		} 
		if (s == "resta") {
			cin >> a.num >> a.den;
			r = resta(r, a);
		} 
		if (s == "multiplica") {
			cin >> a.num >> a.den;
			r = multiplica(r, a);
		} 
		if (s == "divideix") {
			cin >> a.num >> a.den;
			r = divideix(r, a);
		}
		if (r.num == 0) cout << 0 << endl;
		else if (r.den == 1) cout << r.num << endl;
		else cout << r.num << '/' << r.den << endl;
	}
}
