#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		char c;
		vector<int> v(26, 0);
		cin >> c;
		while (c != '.') {
			if (c >= 'A' and c <= 'Z') ++v[c - 'A'];
			cin >> c;
		}
		cin >> c;
		while (c != '.') {
			if (c >= 'A' and c <= 'z') --v[c - 'A'];
			cin >> c;
		}
		int j = 0;
		bool found = false;
		while (not found and j < 26) {
			if (v[j] != 0) found = true;
			else ++j;
		}
		if (found) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}
