#include <iostream>
#include <vector>
using namespace std;

bool magic_square(const vector< vector<int> >& m) {
	int n = m.size();
	int aux_sum = 0;
	for (int i = 0; i < n; ++i) aux_sum += m[i][0];
	
	for (int i = 0; i < n; ++i) {	//files
		int sum = 0;
		for (int j = 0; j < n; ++j) sum += m[i][j];
		if (sum != aux_sum) return false;
	}
	
	for (int i = 0; i < n; ++i) {	//columnes
		int sum = 0;
		for (int j = 0; j < n; ++j) sum += m[j][i];
		if (sum != aux_sum) return false;
	}

	int i = 0;
	int j = 0;
	int sum = 0;
	while (i < n and j < n) { //diag. esquerra
		sum += m[i][j];
		++i;
		++j;
	}
	if (sum != aux_sum) return false;

	i = n - 1;
	j = 0;
	sum = 0;
	while (i >= 0 and j < n) {
		sum += m[i][j];
		++j;
		--i;
	}
	if (sum != aux_sum) return false;

	for (int k = 1; k <= n*n; ++k) {
		bool found = false;
		int l = 0;
		while (not found and l < n) {
			int p = 0;
			while (not found and p < n) {
				if (not found and m[l][p] == k) found = true;
				++p;
			}
			++l;
		}
		if (not found) return false;
	}
	return true;
}

int main() {
	int n;
    while (cin >> n) {
        vector<vector<int> > m(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> m[i][j];
        	}   
    	}
    	if (magic_square(m)) cout << "true" << endl;
    	else cout << "false" << endl;
	}
}
