#include <iostream>
#include <vector>
using namespace std;

bool is_palindrome(const string& s) {
	int m = 0;
	int n = s.length() - 1;
	bool palindrome = true;
	while (palindrome and m < n) {
		palindrome = (s[m] == s[n]);
		++m;
		--n;
	}
	return palindrome;
}

int main() {
	string s;
	while (cin >> s) {
		if (is_palindrome(s)) cout << "is palindrome" << endl;
		else cout << "is not palindrome" << endl;
	}
}
