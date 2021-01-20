#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
	int n = a.size();
	Matrix prod(n, vector<int>(n, 0));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) prod[i][j] += a[i][k]*b[k][j];
		}
	}
	return prod;
}

void write_matrix(const Matrix& m) {
	int n = m.size();
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) cout << m[i][j] << ' ';
		cout << endl;
	}
}

Matrix read_matrix(int n) {
	Matrix mat(n, vector<int>(n));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) cin >> mat[i][j];
	}
	return mat;
}

int main() {
	int n;
	cin >> n;
	Matrix a = read_matrix(n);
	Matrix b = read_matrix(n);
	Matrix prod = product(a, b);
	write_matrix(prod);
}
