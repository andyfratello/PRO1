#include <iostream>
using namespace std;

int value(char c) {
	int total = 0;
	if (c == 'a' or c == 'e') ++total;
	else if (c == 'o' or c == 's') total += 2;
	else if (c == 'd' or c == 'i' or c == 'n' or c == 'r') total += 3;
	else if (c == 'c' or c == 'l' or c == 't' or c == 'u') total += 4;
	else if (c == 'm' or c == 'p') total += 5;
	else if (c == 'k' or c == 'w') total += 7;
	else total += 6;
	return total;
}

int main() {
	char c;
	int sum = 0;
	while (cin >> c) {
		sum += value(c);
	}
	cout << sum << endl;
}
