#include <iostream>
using namespace std;

void converge(int n, int& k, int& far) {
    if (n == 1) far = 1;
    else {
    	while (n != 1) {
    		int aux = n;
        	if (n%2 == 0) n /= 2;
        	else {
        		n = (n*3) + 1;
        		aux = n;
        	}
        	++k;
        	if (far < aux) far = aux;
        }
    }
}

int main() {
	int m, p;
	int far = 0;
	cin >> m >> p;
	for (int i = 1; i <= m; ++i) {
		int k = 0;
		converge(i, k, far);
		if (k >= p) cout << i << endl;
	}
	cout << "The greatest reached number is " << far << '.' << endl;
}
