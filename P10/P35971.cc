#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

// Pre : entren unes coord inicials of, oc i unes coord finals df, dc
// Post : retorna la suma del camÃ­ recorregut entre of-oc i df-dc a la matriu mat
int suma_linia(const Matriu& mat, int of, int oc, int df, int dc) {
	int down = 2;
	int right = 2;
	if (of == df and oc < dc) right = 1;
	else if (of == df and oc > dc) right = 0;
	else if (oc == dc and of < df) down = 1;
	else if (oc == dc and of > df) down = 0;
	int sum = 0;
	if (right == 1) {
		while (oc < dc) {
			++oc;
			sum += mat[of][oc];
		}
	} else if (right == 0) {
		while (oc > dc) {
			--oc;
			sum += mat[of][oc];
		}
	} else if (down == 1) {
		while (of < df) {
			++of;
			sum += mat[of][oc];
		}
	} else if (down == 0) {
		while (of > df) {
			--of;
			sum += mat[of][oc];
		}
	}
	return sum;
}

// Pre : - 
// Post : es llegeix la matriu mat
void read_matrix(Matriu& mat) {
	int r = mat.size();
	int c = mat[0].size();
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) cin >> mat[i][j];
	}
}

int main() {
	int f, c;
	cin >> f >> c;
	Matriu mat(f, vector<int>(c));
	read_matrix(mat);
	int x, y;
	int ox, oy;
	int sum = 0;
	bool first = true;
	while (cin >> x >> y) {
		if (first) {
			sum = mat[x][y];
			first = false;
		} else sum += suma_linia(mat, ox, oy, x, y);
		ox = x;
		oy = y;
	}
	cout << "suma = " << sum << endl;
}
