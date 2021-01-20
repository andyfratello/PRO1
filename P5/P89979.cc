#include <iostream>
using namespace std;

int main() {
	int n;
	bool increasing = false;
	int count = 0;
	while (cin >> n and not increasing) {
		++count;
		increasing = true;
		string ant = "";
		for (int i = 0; i < n; ++i) {
			string s;
			cin >> s;
			if (ant > s) increasing = false; 
			ant = s;
		}
	}
	if (increasing) cout << "The first line in increasing order is " << count << '.';
	else cout << "There is no line in increasing order.";
	cout << endl;
}
