#include <iostream>
using namespace std;

int main() {
	int i;
	cin >> i;
	int x;
	int count = 1;
	int j = 0;
	bool found = false;
	while (cin >> x and not found) {
		if (count == i) {
			j = x;
			found = true;
		}
		++count;
	}
	if (not found) cout << "Incorrect position";
	else cout << "At the position " << i << " there is a(n) " << j;
	cout << '.' << endl;
}
