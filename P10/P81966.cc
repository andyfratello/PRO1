#include <iostream>
#include <vector>
using namespace std;

// FORMA RECURSIVA
// Pre : entra un double, un vector de doubles, i dos enters (left i right)
// Post : retorna la posició del double x dins el vector v
int position(double x, const vector<double>& v, int left, int right) {
	if (left > right) return -1;
	int pos = (left + right)/2; //meitat
	if (x > v[pos]) return position(x, v, pos + 1, right);
	if (x < v[pos]) return position(x, v, left, pos - 1);
	return pos;
}

int main() {
	int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            int left, right;
            cin >> x >> left >> right;
            cout << position(x, V, left, right) << endl;
        }
    }
}

/* FORMA ITERATIVA
// Pre : entra un double, un vector de doubles, i dos enters (left i right)
// Post : retorna la posició del double x dins el vector v
int position(double x, const vector<double> &v; int left, int right) {
	int pos; 
	bool found = false;
	while (not found and left <= right) {
		pos = (left + right)/2;
		if (x < v[pos]) right = pos - 1;
		else if (x > v[pos]) left = pos + 1;
		else found = true;
	}
	if (found) return pos;
	else return -1;
}
*/
