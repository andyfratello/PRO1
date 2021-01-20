#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

int bacteries_adjacents(const Matrix& m, const int x, const int y) {
	int r = m.size();
	int c = m[0].size();
	int count = 0;
	for (int i = -1; i < 2; ++i) { //comença a -1 perquè així llegim l'elem. de l'esquerra i acabem al de la dreta 1
		for (int j = -1; j < 2; ++j) { //comença a -1 perquè així llegim l'elem. de dalt i acabem al de baix 1
			int x1 = x + i;
			int y1 = y + j;
			if (x1 >= 0 and y1 >= 0 and x1 < c and y1 < r) {
				if (m[y1][x1] == 'B' and (i != 0 or j != 0)) ++count;  // i = 0 i j = 0 són i = x i j = y
			}
		}
	}
	return count;
}

void seguent_temps(const Matrix& a, Matrix& b, const int x, const int y) {
	int adj = bacteries_adjacents(a, x, y);
	if ((a[y][x] == '.' and adj == 3) or (a[y][x] == 'B' and (adj == 2 or adj == 3))) b[y][x] = 'B';
	else b[y][x] = '.';
}

int main() {
	int n, m;
	cin >> n >> m;
	bool first = true;
	while (n != 0 and m != 0) {
		Matrix mat(n, Row(m));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) cin >> mat[i][j];
		}
		Matrix res(n, Row(m));
		if (first) first = false;
		else cout << endl;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				seguent_temps(mat, res, j, i);
				cout << res[i][j];
			}
			cout << endl;
		}
		cin >> n >> m;
	}
}
