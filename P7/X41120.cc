#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cims(const vector<int>& v) {
	vector<int>cims;
	int n = v.size();
	int x = v[0];
	int y = v[1];
	for (int i = 2; i < n; ++i) {
		if (x < y and y > v[i]) cims.push_back(y); // afegeix element al final del vector
		x = y;
		y = v[i];
	}
	return cims;
}


int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	vector<int>cims = calcula_cims(v);
	int mida = cims.size();
	cout << mida << ":";
	for (int i = 0; i < mida; ++i) cout << ' ' << cims[i];
	cout << endl;
	bool first = true;
	for (int i = 0; i < mida - 1; ++i) {
		if (cims[i] > cims[mida - 1]) {
			if (not first) cout << ' ';
			cout << cims[i];
			first = false;
		}
	}
	if (first) cout << '-';
	cout << endl;
}
