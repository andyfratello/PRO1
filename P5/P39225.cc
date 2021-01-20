#include <iostream>
using namespace std;

int main() {
	int i;
	cin >> i;
	int x;
	cin >> x;
	int count = 0;
	int j = 0;
	while (x != -1) {
		++count;
		if (count == i) j = x;
		cin >> x;
	}
	cout << "At the position " << i << " there is a(n) " << j << '.' << endl;
}
