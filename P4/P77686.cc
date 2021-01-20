#include <iostream>
using namespace std;

bool is_palindromic(int n) {
	int reverse = 0;
	int i = n;
	while (n != 0) {
		reverse = reverse*10 + n%10;
		n /= 10;
	}
	if (i >= 0) return (i == reverse);
	return false;
}


int main() {
    int n;
    while (cin >> n) { 
    	if (is_palindromic(n)) cout << "true";
    	else cout << "false";
    	cout << endl;
	}
}
