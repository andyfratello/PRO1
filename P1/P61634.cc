#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if ((n%4 == 0 and n%100 != 0) or (n%100 == 0 and (n/100)%4 == 0)) cout << "YES";
	else cout << "NO";
	cout << endl;
}
