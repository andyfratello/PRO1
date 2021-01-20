#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Paraula {
	string word;
	int num;
};

// Pre : -
// Post : retorna true si a apareix mÃ©s vegades que b, i en cas d'empat per ordre lexico. false en cas contrari
bool comp(const Paraula& a, const Paraula& b) {
	if (a.num != b.num) return a.num > b.num;
	return a.word < b.word;
}

int main() {
	int n, k;
	while (cin >> n >> k) {
		vector<string> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i]; // read vector
		sort(v.begin(), v.end());
		vector<Paraula> ordered; // empty vector
		Paraula p;
		p.word = v[0];
		p.num = 1;
		for (int i = 1; i < n; ++i) {
			if (p.word == v[i]) ++p.num;
			else {
				ordered.push_back(p);
				p.word = v[i];
				p.num = 1;
			}
		}
		ordered.push_back(p);
		sort(ordered.begin(), ordered.end(), comp);
		int i = 0;
		while (k != 0) {
			cout << ordered[i].word << endl;
			++i;
			--k;
		}
		cout << "----------" << endl;
	}
}
