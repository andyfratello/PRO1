#include <iostream>
using namespace std;

int main() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 == a2 and b1 == b2) cout << "= , [" << a1 << ',' << b1 << ']';
	else if (a1 >= a2 and b1 <= b2) cout << 1 << " , [" << a1 << ',' << b1 << ']';
	else if (a1 <= a2 and b1 >= b2) cout << 2 << " , [" << a2 << ',' << b2 << ']';
	else { //?
		if ((a1 < b2 and b1 < a2) or (a1 > b2 and b1 > a2)) cout << "? , []";
		else if (a1 < a2 and b1 < b2) cout << "? , [" << a2 << ',' << b1 << ']';
		else if (a1 > a2 and b1 > b2) cout << "? , [" << a1 << ',' << b2 << ']';
	}
	cout << endl;
}
