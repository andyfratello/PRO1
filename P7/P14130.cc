#include <iostream>
#include <vector>
using namespace std;

void read_vector(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n; ++i) cin >> v[i];
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	read_vector(v);
	int count = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (v[n - 1] == v[i]) ++count;
	}
	cout << count << endl;
}
