#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

void marcar(vector<string> &v, vector<string> &vfinal, string &p, int n, int m, int iini, int jini, int di, int dj) {
	int lenp = p.size();
	int ifinal = iini + di*(lenp - 1);
	int jfinal = jini + dj*(lenp - 1);
	// comprovar si estÃ  fora de la matriu (que no ens sortim)
	if (not (0 <= ifinal and ifinal < n)) {
		return;
	}
	if (not (0 <= jfinal and jfinal < m)) {
		return;
	}
	// fem recorregut char per char per a veure si trobem paraula
	for (int ip = 0, i = iini, j = jini; ip < lenp; ++ip, i += di, j += dj) {
		if (v[i][j] != p[ip]) {
			return; // si char diferent retorna
		}
	}
	for (int ip = 0, i = iini, j = jini; ip < lenp; ++ip, i += di, j += dj) {
		vfinal[i][j] = char(v[i][j] - 'a' + 'A'); // passem a majus si tribem paraula
	}
}

int main() {
	int np, m, n; // np = num. paraules
	bool first = true;
	while (cin >> np >> n >> m) {
		if (not first) cout << endl;
		first = false;
		vector<string> vp(np); // vp = vector de paraules
		for (int i = 0; i < np; ++i) cin >> vp[i];
		vector<string> v(n, string(m, ' ')); // matriu de char ini. a ' '
		for (int i = 0; i < n; ++i) { // llegim matriu
			for (int j = 0; j < m; ++j) cin >> v[i][j];
		}
		vector<string> vfinal = v;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {	//recorrem matriu 
				for (int ip = 0; ip < np; ++ip) { // comprovem si les paraules es troben a la matriu v
					string &p = vp[ip];
					marcar(v, vfinal, p, n, m, i, j, 1, 0); // vertical
					marcar(v, vfinal, p, n, m, i, j, 0, 1); // horitzontal
					marcar(v, vfinal, p, n, m, i, j, 1, 1); // diagonal
				}
			}
		}
		// escrivim matriu
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (j > 0) cout << ' ';
				cout << vfinal[i][j];
			}
			cout << endl;
		}
	}
}
