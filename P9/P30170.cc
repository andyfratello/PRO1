#include <iostream>
#include <map>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		string s;
		map <string, int>m;
		for (int i = 0; i < n; i++) {
			cin >> s;
			++m[s];
		}
		map <string, int>::iterator it;
		map <int, int>m2;
		for (it = m.begin(); it != m.end(); it++) {
			m2[it->second] += (it->first).length();
		}
		map <int, int>:: iterator it2;
		for (it2 = m2.begin(); it2 != m2.end(); it2++) {
			cout << it2->first << " : " << (it2->second) << endl;
		}
		cout << endl;
	}
}
