#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Rows;
typedef vector<Rows> Matrix;

typedef vector<char> Row;
typedef vector<Row> Sopa;

// Pre : entra la matriu de lletres, la paraula a trobar, unes coordenades ij i les dimensions de la matriu
// Post : retorna si la paraula es troba a la matriu
bool word_found(Sopa &sopa, string &p, int i, int j, int inci, int incj) {
	int r = sopa.size();
	int c = sopa[0].size();
	int len = 0;
	while (i < r and j < c and len < p.length()) {
		if (sopa[i][j] != p[len]) return false;
		i += inci;
		j += incj;
		++len;
	}
	return len == p.length();
}

int sum_points(Matrix &numeros, int len, int x, int y, int incx, int incy) {
	int sum = 0;
	for (int i = 0; i < len; ++i) {
	  sum += numeros[x][y];
	  x = x + incx;
	  y = y + incy;
	}
	return sum;
}

int main() {
	int r, c;
	while (cin >> r >> c) {
		Sopa sopa(r, vector<char>(c));
		for (int i = 0; i < r; ++i) { 
			for (int j = 0; j < c; ++j) cin >> sopa[i][j];
		}
		Matrix numeros(r, vector<int>(c));
		for (int i = 0; i < r; ++i) { 
			for (int j = 0; j < c; ++j) cin >> numeros[i][j];
		}
		int n;
		cin >> n;
		for (int k = 0; k < n; ++k) {
			string p;
			cin >> p;
			int len = p.length();
			int sum_max = -1; //int sum_max = 0;
			// bool found = false; <--- no hace falta esta var
			for (int i = 0; i < r; ++i) {
				for (int j = 0; j < c; ++j) {	// recorrem matriu
					if (word_found(sopa, p, i, j, 0, 1)) { //horitzontal
					  //found = true;
					  int suma_punts = sum_points(numeros, len, i, j, 0, 1);
						if (sum_max < suma_punts) sum_max = suma_punts;
					}
					if (word_found(sopa, p, i, j, 1, 0)) { //vertical
					  //found = true;
					  int suma_punts = sum_points(numeros, len, i, j, 1, 0);
						if (sum_max < suma_punts) sum_max = suma_punts;
					}
				}
			}
			if (sum_max != -1) /*(found)*/ cout << sum_max << endl;
			else cout << "no" << endl;
		}
	}	
}
