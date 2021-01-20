#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int max;
		cin >> max;
		for (int i = 1; i < n; ++i) {
			int x;
			cin >> x;
			if (max < x) max = x;
		}
		cout << max << endl;
	}
}
