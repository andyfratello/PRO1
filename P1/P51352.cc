#include <iostream>
using namespace std;

int main() {
	char a, b;
	cin >> a >> b;
	if (a == 'A') {
		if (b == 'P') cout << 1;
		else if (b == 'V') cout << 2;
		else cout << '-';
	} else if (a == 'P') {
		if (b == 'V') cout << 1;
		else if (b == 'A') cout << 2;
		else cout << '-';
	} else {
		if (b == 'A') cout << 1;
		else if (b == 'P') cout << 2;
		else cout << '-';
	} 
	cout << endl;
}
