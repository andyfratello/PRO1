#include <iostream>
using namespace std;

int main() {
	string s, max, max2, temp;
	cin >> max >> max2;
	if (max2 > max) {
		temp = max2;
		max2 = max;
		max = temp;
	}
	while (cin >> s) {
		if (s != max and s != max2) {	
			if (max2 < s) {
				if (max < s) {
					max2 = max;
					max = s;
				} else max2 = s;
			} else if (max == max2) max2 = s;
		}
	}
	cout << max2 << endl;
}
