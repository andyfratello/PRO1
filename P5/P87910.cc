#include <iostream>
using namespace std;

// a = .- ; e = . ; i = .. ; o = --- ; u = ..-

void morse(char c, int& n) {
	if (c == 'a') {
		cout << ".-";
		n += 2;
	}
	if (c == 'e') {
		cout << '.';
		++n;
	}
	if (c == 'i') {
		cout << "..";
		n += 2;
	}
	if (c == 'o') {
		cout << "---";
		n += 3;
	}
	if (c == 'u') {
		cout << "..-";
		n += 3;
	}
}

int main() {
	int x, n = 0;
	cin >> x;
	char c;
	while (cin >> c) {
		morse(c, n);
		if (n >= x) {
			n = 0;
			cout << endl;
		}
	} 
	if (n != 0) {
		cout << endl;
	} 
	cout << "STOP" << endl;
}
