#include <iostream>
#include <vector>
using namespace std;

// Pre : entra un vector d'enters
// Post : retorna vector de bools on true es posició que té rampa ; else false
vector<bool> ramps_pos(const vector <int>& v) {
	int x = v[0];
	int y = v[1];
	int n = v.size();
	vector<bool> pos(n);
	for (int i = 2; i < n; ++i) {
		if ((x < y and y < v[i]) or (x > y and y > v[i])) pos[i - 2] = true;
		else pos[i - 2] = false;
		x = y;
		y = v[i];
	}
	return pos;
}

// Pre : entra un vector de booleans 
// Post : retorna el num. de parells de pos. amb rampa que són potencialment conflictius
int pot_conflictive(const vector <bool>& b) {
	int count = 0;
	int n = b.size();
	for (int i = 0; i < n; ++i) {
		if (b[i] and b[i + 1]) ++count;
		if (b[i] and b[i + 2]) ++count;
	}
	return count;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		vector<bool>positions = ramps_pos(v);
		int mida = positions.size();
		cout << "positions with a ramp:";
		for (int i = 0; i < mida; ++i) {
			if (positions[i]) cout << ' ' << i;
		}
		cout << endl;
		cout << "potentially conflictive: " << pot_conflictive(positions) << endl;
		cout << "---" << endl;
	}
}
