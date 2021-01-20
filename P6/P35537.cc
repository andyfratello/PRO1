#include <iostream>
using namespace std;

bool is_increasing(int n) {
	int x = n/10;
	if (n > 9) {
		if (n%10 >= (n/10)%10) return is_increasing(x);
		else return false;
	}
	return true;
}

int main() {
	int n;
	while (cin >> n) {
		if (is_increasing(n)) cout << "true";
		else cout << "false";
		cout << endl;
	}
}
