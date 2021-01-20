#include <iostream>
using namespace std;

int expression() {
	char c;
	cin >> c;
	if (c >= '0' and c <= '9') return c - '0';
	else {
		int a = expression();
		int b = expression();
		if (c == '+') return a + b;
		else if (c == '-') return a - b;
		else return a*b;
	}
}

int main() {
	cout << expression() << endl;
}
