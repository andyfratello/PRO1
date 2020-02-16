#include <iostream>
using namespace std;

int main() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	cout << '[';
	if (a1 <= a2 and b1 - a2 >= 0) {
		if (b2 <= b1) cout << a2 << ',' << b2;
		else cout << a2 << ',' << b1;
	} else if (a2 <= a1 and b2 - a1 >= 0) {
		if (b2 <= b1) cout << a1 << ',' << b2;
		else cout << a1 << ',' << b1;
	}
	cout << ']' << endl; 
}
