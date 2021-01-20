#include <iostream>
using namespace std;

void reverse(string s) {
	cin >> s;
	if (s != "end") {
		reverse(s);
		cout << s << endl;
		cin >> s;
	}
}

int main() {
	string s;
	reverse(s);
}
