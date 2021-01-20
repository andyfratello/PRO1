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

bool touched(Tauler &m, int x, int y) {
	if (m[x][y]) return true;
	return false;
}

int min(int a, int b) {
	if (a < b) return a;
	else return b;
}

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

bool find_horizontal(Tauler &m, int i, int from, int to) {
	for (int j = from; j <= to; ++j) {
		if (m[i][j]) return true;
	}
	return false;
}

bool find_vertical(Tauler &m, int j, int from, int to) {
	for (int i = from; i <= to; ++i) {
		if (m[i][j]) return true;
	}
	return false;
}

int distance(Tauler &m, int x, int y) {
	int dist = 1;
	while (dist <= 10) {
		if (x - dist >= 0) { // top
			if (find_horizontal(m, x - dist, max(0, y - dist), min(y + dist, 9))) return dist;
		}
		if (x + dist < 10) { // bottom
			if (find_horizontal(m, x + dist, max(0, y - dist), min(y + dist, 9))) return dist;
		}
		if (y - dist >= 0) { // left
			if (find_vertical(m, y - dist, max(0, x - dist), min(x + dist, 9))) return dist;
		}
		if (y + dist < 10) { // right
			if (find_vertical(m , y + dist, max(0, x - dist), min(x + dist, 9))) return dist;
		}
		++dist;
	}
	return dist;
}

int main() {
	Tauler m(10, vector<bool>(10, false));
	for (int i = 0; i < 10; ++i) {	// Player 1
		char c, orientacio;
		int y, mida;
		cin >> c >> y >> mida >> orientacio;
		int x = int(c - 'a');
		if (orientacio == 'h') {
			for (int j = 0; j < mida; ++j) m[x][(y - 1) + j] = true;
		} else {
			for (int j = 0; j < mida; ++j) m[x + j][y - 1] = true;
		}
	}
	draw_board(m);
	cout << endl;
	char ch; 
	int b;
	while (cin >> ch >> b) {
		cout << ch << b << ' ';
		int a = int(ch - 'a');
		if (touched(m, a, b - 1)) cout << "touched!" << endl;
		else {
			cout << "water! closest ship at distance ";
			cout << distance(m, a, b - 1) << endl;
		}
	}
}
