#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

int main() {
	int r, c;
	cin >> r >> c;
	Matriu m(r, Fila(c));
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) cin >> m[i][j];
	}
	string s;
	while (cin >> s) {
		if (s == "row") {
			int n;
			cin >> n;
			cout << "row " << n << ':';
			for (int i = 0; i < c; ++i) cout << ' ' << m[n - 1][i];
		} else if (s == "column") {
			int n;
			cin >> n;
			cout << "column " << n << ':';
			for (int i = 0; i < r; ++i) cout << ' ' << m[i][n - 1];
		} else {
			int a, b;
			cin >> a >> b;
			cout << "element " << a << ' ' << b << ": " << m[a - 1][b - 1];
		}
		cout << endl;
	}
}
