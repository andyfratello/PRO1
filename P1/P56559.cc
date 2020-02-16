#include <iostream>
using namespace std;

int main() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 == a2 and b1 == b2) cout << '=';
	else if (a1 >= a2 and b1 <= b2) cout << 1;
	else if (a1 <= a2 and b1 >= b2) cout << 2;
	else cout << '?'; 
	cout << endl;
}
