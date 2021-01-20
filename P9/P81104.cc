#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Assignatura {
	string nom;
	double nota;
};

struct Alumne {
	string nom;
	int dni;
	vector<Assignatura> ass;
};

double nota(const vector<Alumne>& alums, int dni, string nom) {
	bool found = true;
	int i = 0;
	while (i < alums.size() and found) {
		Alumne al = alums[i];
		if (al.dni == dni) {
			for (int j = 0; j < al.ass.size(); ++j) {
				if (al.ass[j].nom == nom and al.ass[j].nota >= 0) return al.ass[j].nota;
			}
			found = false;
		}
		++i;
	}
	return -1;
}

double mitjana(const vector<Assignatura>& ass) {
	int n = ass.size();
	double sum = 0;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		if (ass[i].nota >= 0) {
			sum += ass[i].nota;
			++count;
		}
	}
	return (sum/count);
}

void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
	com = 0;
	double n = nota(alums, dni, nom);
	for (int i = 0; i < alums.size(); ++i) {
		Alumne al = alums[i];
		if (mitjana(al.ass) > n) ++com;
	}
}

vector<Alumne> read_vector(int n) {
	vector<Alumne> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i].nom >> v[i].dni;
		int nass; //num. assignatures
		cin >> nass;
		vector<Assignatura> vass(nass);
		for (int j = 0; j < nass; ++j) cin >> vass[j].nom >> vass[j].nota;
		v[i].ass = vass;
	}
	return v;
}

int main() {
	int n;
	cin >> n;
	vector<Alumne> v = read_vector(n);
	int idn;
	string sub;
	while (cin >> idn >> sub) {
		int c;
		compta(v, idn, sub, c);
		cout << c << endl;
	}
}
