#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(1001);
	int x;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		x -= 1000000000;
		++v[x]; 
	}
	int m = v.size();
	for (int i = 0; i < m; ++i) {
		if (v[i] != 0) {
			cout << 1000000000 + i << " : " << v[i] << endl;
		}
	}
}
