#include <iostream>
using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
	if (n < 10) {
		maxim = n;
		minim = n;
	} else {
		digit_maxim_i_minim(n/10, maxim, minim);
		if (maxim < n%10) maxim = n%10;
		if (minim > n%10) minim = n%10;
	}
}

int main() {
	int n;
	int max = 0;
	int min = 0;
	while (cin >> n) {
		digit_maxim_i_minim(n, max, min);
		cout << max << ' ' << min << endl;
	}
}
