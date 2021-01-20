#include <iostream>
using namespace std;

void reverse(string s, int& count) {
	while (cin >> s) {
		++count;
		reverse(s, count);
		if (count <= 0) {
			cout << s << endl;
		}
		count -= 2;
	}
}

int main() {
	string s;
	int count = 0;
	reverse(s, count);
}
