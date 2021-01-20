#include <iostream>
#include <vector>
using namespace std;

void read_vector(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n; ++i) cin >> v[i];
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		read_vector(v);
		bool first = false;
		for (int i = n - 1; i >= 0; --i) {
			if (first) cout << ' ';
			else first = true;
			cout << v[i];
		}
		cout << endl;
	}
}
