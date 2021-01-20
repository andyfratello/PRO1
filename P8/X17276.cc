#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

bool diagonals(Matrix& m, int x, int y) {
	int r = m.size();
	int c = m[0].size();
	int i = x - 1;
	int j = y + 1;
	int max = m[x][y];
	while (i >= 0 and j < c) { //top right
		if (max < m[i][j]) max = m[i][j];
		else return false;
		--i;
		++j;
	}
	i = x + 1;
	j = y + 1;
	max = m[x][y];
	while (i < r and j < c) { //bottom right
		if (max < m[i][j]) max = m[i][j];
		else return false;
		++i;
		++j;
	}
	i = x - 1;
	j = y - 1;
	max = m[x][y];
	while (i >= 0 and j >= 0) { //top left
		if (max < m[i][j]) max = m[i][j];
		else return false;
		--i;
		--j;
	}
	i = x + 1;
	j = y - 1;
	max = m[x][y];
	while (i < r and j >= 0) { //bottom left
		if (max < m[i][j]) max = m[i][j];
		else return false;
		++i;
		--j;
	}
	return true;
}

Matrix read_matrix(int r, int c) {
	Matrix m(r, vector<int>(c));
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) cin >> m[i][j];
	}
	return m;
}

int main() {
	int r, c;
	while (cin >> r >> c) {
		Matrix m = read_matrix(r, c);
		int x, y;
		cin >> x >> y;
		if (diagonals(m, x, y)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
