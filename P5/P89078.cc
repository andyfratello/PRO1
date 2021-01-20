#include <iostream>
using namespace std;

int main() {
	int count = 1;
	int n;
	cin >> n;
	while (n%2 != 0) {
		cin >> n;
		++count;
	}
	cout << count << endl;
}
