#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b, c;
	a = n%10;
	n /= 10;
	b = n%10;
	n /= 10;
	c = n%10;
	cout << a + b + c << endl;
}
