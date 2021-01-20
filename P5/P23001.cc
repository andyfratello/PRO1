#include <iostream>
using namespace std;

int main() {
	string s, c;
	cin >> s;
	int count = 1;
	int max = 1;
	while (cin >> c) {
		if (s == c) {
			++count;
			if (max < count) max = count;
		} else count = 0;
	}
	cout << max << endl;
}
