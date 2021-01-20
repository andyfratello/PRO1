#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<bool> > Tauler;

void draw_board(Tauler &m) {
	cout << "  12345678910" << endl;
	for (int i = 0; i < 10; ++i) {
		cout << char('a' + i) << ' ';
		for (int j = 0; j < 10; ++j) {
			if (m[i][j]) cout << 'X';
			else cout << '.';
		}
		cout << endl;
	}
}
