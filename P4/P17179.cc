#include <iostream>
using namespace std;

int main() {
	  cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
    	int m;
    	cin >> m;
    	double sum = 0;
    	int count = 0;
    	double max = -9999999999;
    	double min = 9999999999;
    	for (int j = 0; j < m; ++j) {
    		double x;
    		cin >> x;
    		++count;
    		sum += x;
    		if (max < x) max = x;
    		if (min > x) min = x;
    	}
    	cout << min << ' ' << max << ' ' << sum/count << endl;
    }
}
