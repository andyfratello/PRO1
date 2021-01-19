#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		cout << "suma dels cubs entre " << a << " i " << b << ": ";
		if (a > b) cout << 0;
		else if (a == b) cout << a*a*a;
		else {
			int sum = 0;
			for (int i = a; i <= b; ++i) {
				sum += i*i*i;
			}
			cout << sum;
		}
		cout << endl;
	}
}
