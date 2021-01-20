#include <iostream>
#include <vector>
using namespace std;

typedef vector<bool> Row;
typedef vector<Row> Matrix;

void direction(Matrix &m, int x, int y, int d1, int d2) {
	int r = m.size();
	int c = m[0].size();
	int i = x + d1;
	int j = y + d2;
	bool found = false;
	while (not found and i < r and j < c and i >= 0 and j >= 0) {
		if (m[i][j]) {
			found = true;
			cout << '(' << x + 1 << ',' << y + 1 << ")<->(" << i + 1 << ',' << j + 1 << ')' << endl;
		}
		i += d1;
		j += d2;
	}
}

void threat(Matrix &m, int x, int y) {
	direction(m, x, y, 1, 1); 	//bottom right
	direction(m, x, y, 1, -1); 	//bottom left
	direction(m, x, y, -1, 1); 	//top right
	direction(m, x, y, -1, -1); //top left
}

int main() {
	int r, c;
	cin >> r >> c;
	Matrix m(r, vector<bool>(c));
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			char ch;
			cin >> ch;
			m[i][j] = (ch == 'X');
		}
	}
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if (m[i][j]) threat(m, i, j);
		}
	}
}
