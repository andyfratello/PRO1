#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& x, const vector<int>& y) {
	int i, j;
	i = j = 0; 
	int a = x.size();
	int b = y.size();
	int count = 0;
	while (i < a and j < b) {
		if (x[i] == y[j]) {
			++count;
			++i;
			++j;
		} else if (x[i] > y[j]) ++j;
		else if (x[i] < y[j]) ++i;
	}
	return count;
}

int main() {
	int m, n;
	while (cin >> m >> n) {
		vector<int> x(m);
		for (int i = 0; i < n; ++i) cin >> x[i];
		vector<int> y(n);
		for (int i = 0; i < m; ++i) cin >> y[i];
		cout << common_elements(x, y) << endl;
	}
}
