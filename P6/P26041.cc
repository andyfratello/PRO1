#include <iostream>
using namespace std;

void reverse(string s) {
	while (cin >> s) {
		reverse(s);
		cout << s << endl;
	}
}

int main() {
	string s;
	reverse(s);
}
