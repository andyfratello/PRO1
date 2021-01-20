#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
	int x = 1;
	last = 0;
	while (x != 0) {
		cin >> x;
		sum += x;
		if (x != 0) last = x;
	}
}

int main() {
	int x = 1;
	int sum_ini = 0;
	int last_ini = 0;
	while (x != 0) {
		cin >> x;
		sum_ini += x;
		if (x != 0) last_ini = x;
	}
	x = 1;
	int count = 1;
	int sum = 1;
	int last = 1;
	while (x != 0 and last != 0) {
		sum = 0;
		info_sequence(sum, last);
		if (last_ini == last and sum_ini == sum) ++count;
	}
	cout << count << endl; 
}
