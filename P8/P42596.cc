#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

// Pre: entra una matriu i dos enters minimum i maximum de la matriu
// Post: per referÃ¨ncia es passen els nous valors de min i max de la matriu mat
void min_max(const Matrix& mat, int& minimum, int& maximum) {
	int r = mat.size();
	int c = mat[0].size();
	maximum = mat[0][0];
	minimum = mat[0][0];
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if (maximum < mat[i][j]) maximum = mat[i][j];
			if (minimum > mat[i][j]) minimum = mat[i][j];
		}
	}
}

// Pre: entren 2 coord. r i c (rows i colum)
// Post: retorna una matriu amb les coordenades entrades
Matrix read_matrix(int r, int c) {
	Matrix m(r, vector<int>(c));
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) cin >> m[i][j];
	}
	return m;
}

int main() {
	int r, c;
	int max, min, count, num_max;
	max = min = count = num_max = 0;
	int dif = -1;
	while (cin >> r >> c) {
		Matrix m = read_matrix(r, c);
		min_max(m, min, max);
		++count;
		if (max - min > dif) {
			dif = max - min;
			num_max = count;
		}
	}
	cout << "la diferencia maxima es " << dif << endl;
	cout << "la primera matriu amb aquesta diferencia es la " << num_max << endl;
}
