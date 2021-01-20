#include <iostream>
using namespace std;

void hexadecimal(int n) {
	int x = n/16;
	if (x != 0) hexadecimal(x);
	if (n - x*16 >= 10) cout << char((n - x*16) - 10 + 'A');
	else cout << n - x*16;
}

void octal(int n) {
	int x = n/8;
	if (x != 0) octal(x);
	cout << n - x*8;
}

void binary(int n) {
	int x = n/2;
	if (x != 0) binary(x);
	cout << n - x*2;
}

int main() {
	int n;
	while (cin >> n) {
		cout << n << " = ";
		binary(n);
		cout << ", ";
		octal(n);
		cout << ", ";
		hexadecimal(n);
		cout << endl;
	}
}
