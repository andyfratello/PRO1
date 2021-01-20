#include <iostream>
using namespace std;

char encoded(char c, int k) {
	if (c >= 'a' and c <= 'z') return 'A' + (c - 'a' + k)%26;
	else if (c == '_') return ' ';
	else return c;
}

int main() {
	int k;
	char c;
	while (cin >> k) {
		cin >> c;
		while (c != '.') {
			cout << encoded(c, k);
			cin >> c;
		}
		cout << endl;
	}
}
