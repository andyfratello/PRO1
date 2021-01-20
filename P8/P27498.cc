#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;
 	
void swap(int& a, int& b) {
	int aux = a;
	a = b;
	b = aux;
}

void transpose(Matrix& m) {
	int mida = m.size();
	for (int i = 0; i < mida; ++i) {
		for (int j = i + 1; j < mida; ++j)
			swap(m[i][j], m[j][i]);
	}
}

void write_matrix(const Matrix& m) {
	int r = m.size();
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < r; ++j) cout << m[i][j] << ' ';
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
	Matrix mat = read_matrix(n);
	transpose(mat);
	write_matrix(mat);
}
