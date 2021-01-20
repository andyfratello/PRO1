#include <iostream>
using namespace std;

int main() {
	string s;
	int count = 0;
	bool begin = false;
	bool end = false;
	bool cert = true;
	while (cin >> s and cert and not end) {
		if (s == "beginning") begin = true;
		else if (s == "end" and begin) end = true;
		else if (s == "end" and not begin) cert = false;
		else {
			if (begin) ++count;
		}
	}
	if (end) cout << count;
	else cout << "wrong sequence";
	cout << endl;
}
