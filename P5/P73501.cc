#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int prev, next;
		int count = 0; 
		cin >> prev;
		while (prev != 0) {
			cin >> next;
			if (prev < next) ++count;
			prev = next;
		}
		cout << count << endl;
	}
}
