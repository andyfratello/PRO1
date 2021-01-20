#include <iostream>
using namespace std;


void factor(int n, int& f, int& q) {
	int a = 0;
	q = 0;
	for (int i = 2; i*i <= n; ++i) {
		a = 0;
		while (n%i == 0) {
			++a;
			n /= i;
			if (a > q) {
				q = a;
				f = i;
			}
		}	
	}
	if (q == 0) {
		f = n;
		q = 1;
	}
}


int main() {
  int n;
  while (cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
  }
}
