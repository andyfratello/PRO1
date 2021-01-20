#include <iostream>
#include <vector>
using namespace std;

bool contains_at(const string& s, const string& p, int pos) {
	int n = p.length();
	for (int i = 0; i < n; ++i) {
		if (s[pos + i] != p[i]) return false;
	}
	return true;
}

bool contains(string s, string p) {
	int n = s.length();
	for (int i = 0; i < n; ++i) {
		if (contains_at(s, p, i)) return true;
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	vector<string> v(n);
	//read vector
	for (int i = 0; i < n; ++i) cin >> v[i];
	//search in vector
	for (int i = 0; i < n; ++i) {
		cout << v[i] << ':';
		for (int j = 0; j < n; ++j) {
			if (contains(v[i], v[j])) cout << ' ' << v[j];
		}
		cout << endl;
	}
}
