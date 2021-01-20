#include <iostream>
using namespace std;

int fatten_rec(int n, int &maxd) {
	if (n < 10) {
		maxd = n;
		return n;
	}
	int x = fatten_rec(n/10, maxd);
	if (n%10 > maxd) maxd = n%10;
	return x*10 + maxd;
}

int fatten(int n) {
	int d = -1;
	return fatten_rec(n, d);
}

int main() {
	int n;
	while (cin >> n) {
		cout << fatten(n) << endl;
	}
}
