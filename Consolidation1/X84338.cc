#include <iostream>
#include <cmath>
using namespace std;

int count(int n) {
	int count = 0;
	while (n > 0) {
		n /= 10;
		++count;
	}
	return count;
}

int first_half(int n, int x) {
	x /= 2;
	n /= pow(10, x);
	int sum = 0;
	while (n > 0) {
		sum += n%10;
		n/=10;
	}
	return sum;
}

int second_half(int n, int x) {
	x /= 2;
	int sum = 0;
	for (int i = 0; i < x; ++i) {
		sum += n%10;
		n/=10;
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	int x = count(n);
	if (n > 10 and x % 2 == 0) {
		if (first_half(n, x) > second_half(n, x)) cout << first_half(n, x) << " > " << second_half(n, x);
		else if (first_half(n, x) < second_half(n, x)) cout << first_half(n, x) << " < " << second_half(n, x);
		else cout << first_half(n, x) << " = " << second_half(n, x);
	} 
	else cout << "nothing";
	cout << endl;
}
