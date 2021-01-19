#include <iostream>
using namespace std;

int main() {
	int n, x, count = 0;
	cin >> n;
	cout << "nombres que acaben igual que " << n << ':' << endl;
	while (cin >> x) {
		if (n%1000 == x%1000) {
			++count;
			cout << x << endl;
		}
	}
	cout << "total: " << count << endl;
}
