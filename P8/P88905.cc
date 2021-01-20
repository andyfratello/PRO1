#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
	int p = a.size();
	int q = a[0].size();
	int r = b[0].size();
	Matrix prod(p, vector<int>(r, 0));
	for (int i = 0; i < p; ++i) {
		for (int j = 0; j < r; ++j) {
			for (int k = 0; k < q; ++k) prod[i][j] += a[i][k]*b[k][j];
		}
	}
	return prod;
}

void write_matrix(const Matrix& m) {
	int r = m.size();
	int c = m[0].size();
	for (int i = 0; i < r; ++i) {
		cout << m[i][0];
		for (int j = 1; j < c; ++j) cout << ' ' << m[i][j];
		cout << endl;
	}
}

Matrix read_matrix(int a, int b) {
	Matrix m(a, vector<int>(b));
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < b; ++j) cin >> m[i][j];
	}
	return m;
}

int main() {
	int p, q, r;
	cin >> p >> q >> r;
	Matrix a = read_matrix(p, q);
	Matrix b = read_matrix(q, r);
	Matrix prod = product(a, b);
	write_matrix(prod);
}
