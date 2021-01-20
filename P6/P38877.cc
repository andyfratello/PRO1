#include <iostream>
using namespace std;

//print the last n strings reversed

void reverse(int& n, string s) {
	while (cin >> s) {
		reverse(n, s);
		if (n != 0) {
			cout << s << endl;
			--n;
		}
	}
}

int main() {
	int n;
	cin >> n;
	string s;
	reverse(n, s);
}
