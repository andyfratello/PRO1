#include <iostream>
using namespace std;

int max4(int a, int b, int c, int d) {
	int max;
	if (a >= b and a >= c and a >= d) max = a;
	else if (b >= a and b >= c and b >= d) max = b;
	else if (c >= a and c >= b and c >= d) max = c;
	else max = d;
	return max;
}

int main() {
	int a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		cout << max4(a, b, c, d) << endl; 
	}
}
