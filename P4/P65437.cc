#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
	int aux = a;
	a = b;
	b = aux;
}

int main() {
	int a, b;
	while (cin >> a >> b) {
		swap2(a, b);
		cout << a << ' ' << b << endl;
	}
}
