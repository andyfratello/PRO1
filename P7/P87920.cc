#include <iostream>
#include <vector>
using namespace std;

bool equal_to_rest(vector<int> v, int sum) {
	int n = v.size();
	for (int i = 0; i < n; ++i) {
		if (sum - v[i] == v[i]) return true;
	}
	return false;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			sum += v[i];
		}
		if (equal_to_rest(v, sum)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
