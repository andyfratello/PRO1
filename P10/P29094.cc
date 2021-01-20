#include <iostream>
#include <vector>
using namespace std;


int position_maximum(const vector<double>& v, int m) {
	double max = v[0];
	int maxpos = 0;
	for (int i = 1; i <= m; ++i) {
		if (max < v[i]) {
			max = v[i];
			maxpos = i;
		}
	}
	return maxpos;
}
