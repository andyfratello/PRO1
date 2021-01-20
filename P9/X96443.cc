#include <iostream>
#include <vector>
using namespace std;

struct Coord {
	int x, y;
};

typedef vector<char> Row;
typedef vector<Row> Matrix;

Coord nextD(const Coord& p, int n) {
	Coord p1;
	if (p.x - 1 < 0 and p.y + 1 > n - 1) {
		p1.x = n - 1;
		p1.y = p.x + 1;
	} else if (p.x == n - 1 and p.y == n - 1) {
		p1.x = 0;
		p1.y = 0;
	} else if (p.x - 1 < 0) {
		p1.y = 0;
		p1.x = p.y + 1;
	} else if (p.y + 1 > n - 1) {
		p1.y = p.x + 1;
		p1.x = n - 1;
	} else {
		p1.x = p.x - 1;
		p1.y = p.y + 1;
	}
	return p1;
}

Matrix read_matrix(int n) {
	Matrix mat(n, Row(n));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) cin >> mat[i][j];
	}
	return mat;
}

int main() {
	int n, d, l;
	Coord p;
	while (cin >> n >> d >> l >> p.x >> p.y) {
		Matrix mat = read_matrix(n);
		vector<char> resultat(l);
		int i = 0;
		resultat[i] = mat[p.x][p.y];
		++i;
		--l;
		while (l > 0) {
			for (int j = 0; j < d + 1; ++j) {
				p = nextD(p, n);
			}
			resultat[i] = mat[p.x][p.y];
			++i;
			--l;
		}
		for (int j = 0; j < resultat.size() - 1; ++j) {
			if (resultat[j] == 'X' and resultat[j + 1] == 'X') {
				cout << ' ';
				++j;
			} else cout << resultat[j];
		}
		cout << resultat[resultat.size() - 1] << endl;
	}
}
