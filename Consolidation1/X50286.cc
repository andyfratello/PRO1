#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;
	while (cin >> s) {
		if (s == "hello") ++count;
	}
	cout << count << endl;
}