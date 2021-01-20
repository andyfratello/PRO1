#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Parell {
	int valor;
	int pos;
};

typedef vector<Parell> Vec_Com;

Vec_Com suma(const Vec_Com& v1, const Vec_Com& v2) {
	int n1 = v1.size();
	int n2 = v2.size();
	vector<Parell> v(n1 + n2);
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < n1 and j < n2) {
		if (v1[i].pos < v2[j].pos) {
			v[k] = v1[i];
			++i;
			++k;
		} else if (v1[i].pos > v2[j].pos) {
			v[k] = v2[j];
			++j;
			++k;
		} else if (v1[i].valor + v2[j].valor != 0) {
			v[k].pos = v1[i].pos;
			v[k].valor = v1[i].valor + v2[j].valor;
			++i;
			++j;
			++k;
		} else {
			++i;
			++j;
		}
	}
	while (i < n1) {
		v[k] = v1[i];
		++i;
		++k;
	}
	while (j < n2) {
		v[k] = v2[j];
		++j;
		++k;
	}
	vector<Parell> res(k);
	for (int m = 0; m < k; ++m) res[m] = v[m];
	return res;
}

void llegeix(Vec_Com& v) {
	for (int i = 0; i < v.size(); ++i) {
		char c;
		cin >> v[i].valor >> c >> v[i].pos;
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int nv;
		cin >> nv;
		Vec_Com v1(nv);
		llegeix(v1);
		cin >> nv;
		Vec_Com v2(nv);
		llegeix(v2);
		Vec_Com resultat = suma(v1, v2);
		cout << resultat.size();
		for (int j = 0; j < resultat.size(); ++j) {
			cout << ' ' << resultat[j].valor << ';' << resultat[j].pos;
		}
		cout << endl;
	}
}
