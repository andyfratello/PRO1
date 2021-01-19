#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < x; ++i) {
		int dist = -i;
		for (int j = 0; j < y; ++j) {
			if (dist < 0) cout << (-dist)%10;
			else cout << dist%10;
			++dist;
		}
		cout << endl;
	}
}
