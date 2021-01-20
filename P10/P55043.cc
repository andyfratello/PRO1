#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int creation_of_a_river(int n) {
	int riu = n;
	while (riu > 0) {
		n += riu%10;
		riu /= 10;
	}
	return n;
}

int encounter_of_rivers(int n) {
	int riv1 = 1;
	int riv3 = 3;
	int riv9 = 9;
	while (n != riv1 and n != riv3 and n != riv9) {
		while (riv1 < n) riv1 = creation_of_a_river(riv1);
		while (riv3 < n) riv3 = creation_of_a_river(riv3);
		while (riv9 < n) riv9 = creation_of_a_river(riv9);
		if (n != riv1 and n != riv3 and n != riv9) n = creation_of_a_river(n);
	}
	return n;
}

int main() {
	int n;
	while (cin >> n) {
		cout << n << ' ' << encounter_of_rivers(n) << endl;
	}
}
