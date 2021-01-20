#include <iostream>
using namespace std;

int main() {
	char c;
	int open, closed;
	open = closed = 0;
	bool f = true;
	while (cin >> c and f) {
		if (c == '(') ++open;
		if (c == ')') {
			++closed;
			if (closed > open) f = false;
		}
	}
	if (open == closed and f) cout << "yes";
	else cout << "no";
	cout << endl;
}
