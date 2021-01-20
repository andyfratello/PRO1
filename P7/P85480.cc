#include <iostream>
#include <vector>
using namespace std;

bool is_prime_sum(int sum) {
	int i = 2;
	while (i*i <= sum) {
		if (sum%i == 0) return false;
		++i;
	}
	return true;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		bool found = false;
		int i = 0;	
		while (not found and i < n) {
			int j = 0;
			while (not found and j < n) {
				if (i != j) {
					if (is_prime_sum(v[i] + v[j])) found = true;
				}
				++j;
			}
			++i;
		}
		if (found) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
