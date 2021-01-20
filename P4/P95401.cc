#include <iostream>
using namespace std;

bool is_leap_year(int year) {
	if ((year%4 == 0 and year%100 != 0) or ((year/100)%4 == 0 and year%100 == 0)) return true;
	return false;
}

int main() {
	int n;
	while (cin >> n) {
		if (is_leap_year(n)) cout << "true";
		else cout << "false";
		cout << endl;
	}
}
