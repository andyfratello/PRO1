#include <iostream>
#include <vector>
using namespace std;

int evaluate(const vector<int>& p, int x) {
	int eval = 0;
	int n = p.size() - 1;
	for (int i = n; i >= 0; --i) {
		eval = eval*x + p[i];
	}
	return eval;
}

void read_vector(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n; ++i) cin >> v[i];
}
