#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos) {
	if (max < lpos) max = lpos;
}

int main() {
	int max = 0;
	int lpos = 0; 
	int n0;
	int n1;
	int count = 0;
	while (cin >> n1 and n1 != 0) {
		n0 = n1;
		infoSequence(max, n0);
		++count;
		if (max == n0) lpos = count;
	}
	int n2;
	int fpos = 1;
	while (cin >> n2 and n2 != 0 and n2 != max) ++fpos;
	cout << max << ' ' << lpos << ' ';
	if (max == n2) cout << fpos;
	else cout << '-';
	cout << endl;
}
