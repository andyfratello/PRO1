#include <iostream>
#include <vector>
using namespace std;

vector<int> num_ocurrencies(int n, int b) {
	vector<int> ocurrencies(b, 0);
	while (n > 0) {
		int d = n%b;
		++ocurrencies[d];
		n /= b;
	}
	return ocurrencies; 
}

vector<int> suma(vector<int> x, vector<int> y) {
	int n = x.size();
	vector<int> r(n);
	for (int i = 0; i < n; ++i) {
		r[i] = x[i] + y[i];
	}
	return r;
}

bool mateixos_digits(int x, int y, int b) {
	vector<int> ox = num_ocurrencies(x, b);
	vector<int> oy = num_ocurrencies(y, b);
	vector<int> oxy = num_ocurrencies(x*y, b);
	return suma(ox, oy) == oxy;
}

void escriu_digit(int n) {
	if (n < 10) cout << n;
	else cout << char('A' + (n - 10));
}

void escriu(int n, int b) {
	if (n < b) {
		escriu_digit(n%b);
		return;
	}
	escriu(n/b, b);
	escriu_digit(n%b);
}

int main() {
	int x, y;
	while (cin >> x >> y) {
		cout << "solucions per a " << x << " i " << y << endl;
		bool solutionexist = false;
		for (int b = 2; b <= 16; ++b){
			if (mateixos_digits(x, y, b)) {
				solutionexist = true;
				escriu(x, b);
				cout << " * ";
				escriu(y, b);
				cout << " = ";
				escriu(x*y, b);
				cout << " (base " << b << ')' << endl;
			}
		}
		if (not solutionexist) cout << "cap" << endl;
		cout << endl;
	}	
}
