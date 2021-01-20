#include <iostream>
using namespace std;

int main() {
	int prev, next, last;
	cin >> prev;
	cin >> next;
	cin >> last;
	bool peak = false;
	while (last != 0) {
		if (prev < next and last < next and next > 3143) peak = true;
		prev = next;
		next = last;
		cin >> last;
	}
	if (peak) cout << "YES";
	else cout << "NO";
	cout << endl;
}
