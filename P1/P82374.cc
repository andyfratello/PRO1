#include <iostream>
using namespace std;

int main() {
	int x, a, b, c, d;
	cin >> x >> a >> b >> c >> d;
	if ((x >= a and x <= b) or (x >= c and x <= d)) cout << "yes";
	else cout << "no";
	cout << endl;
}
