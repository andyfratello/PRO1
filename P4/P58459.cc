#include <iostream>
using namespace std;

bool is_leap_year(int year) {
	if ((year%4 == 0 and year%100 != 0) or ((year/100)%4 == 0 and year%100 == 0)) return true;
	return false;
}

bool is_valid_date(int d, int m, int y) {
	if (d > 0 and m > 0 and y > 0) {	
		if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) {
			if (d < 32) return true;
		} else if (m == 4 or m == 6 or m == 9 or m == 11) {
			if (d < 31) return true;
		} else if (m == 2) {
			if (is_leap_year(y)) {			
				if (d < 30) return true; 
			} else {
				if (d < 29) return true;
			}
		}
	}
	return false;
}

int main() {
	int d, m, y;
	while (cin >> d >> m >> y) {
		if (is_valid_date(d, m, y)) cout << "true";
		else cout << "false";
		cout << endl;
	}
}
