#include <iostream>
#include <vector>
using namespace std;

bool correct(const string& s) {
	vector<char> obert;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == '(' or s[i] == '[') obert.push_back(s[i]);
		else {
			if (obert.size() == 0) return false;
			else if ((obert[obert.size() - 1] == '(' and s[i] == ')') or (obert[obert.size() - 1] == '[' and s[i] == ']')) obert.pop_back();
			else return false;
		}
	}
	return (obert.size() == 0); 
}

int main() {
	string s;
	while (cin >> s) {
		if (correct(s)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
