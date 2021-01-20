#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matrix;

void fields(Matrix& m, int x, int y) {
	int r = m.size();
	int c = m[0].size();
	for (int i = x; i < r; ++i) {
		if (m[i][y] != 0) {
			for (int j = y; j < c; ++j) {
				if (m[i][j] > 0) m[i][j] = 0;
				else j = c;
			}
		} 
		else i = r;
	}
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
		int count = 0;
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				if (m[i][j] != 0) {
					fields(m, i, j);
					++count;
				}
			}
		}
		cout << count << endl;
	}
}
