#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

typedef vector<bool> Rowbool;
typedef vector<Rowbool> Matbool;

bool sudoku(Matrix& m) {
	int x, y;
	for (int i = 0; i < 9; ++i) { // horitzontal i vertical
		vector<bool> horitzontal(9, false);
		vector<bool> vertical(9, false);
		for (int j = 0; j < 9; ++j) {
			x = m[i][j];
			if (not horitzontal[x - 1]) horitzontal[x - 1] = true;
			else return false;
			y = m[j][i];
			if (not vertical[y - 1]) vertical[y - 1] = true;
			else return false;
		}
	}
	int z;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			vector<bool> trespertres(9, false);
			for (int k = 3*i; k < 3*(i + 1); ++k) {
				for (int l = 3*j; l < 3*(j + 1); ++l) {
					z = m[k][l];
					if (not trespertres[z - 1]) trespertres[z - 1] = true;
					else return false;
				}
			}
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		Matrix m(9, Row(9));
		for (int j = 0; j < 9; ++j) {
			for (int k = 0; k < 9; ++k) cin >> m[j][k];
		}
		if (sudoku(m)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
