#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    double sum = 0, sum_power = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
    	double x;
    	cin >> x;
    	sum_power += x * x;
    	sum += x;
    }
    cout << (1.0/(n - 1))*sum_power - (1.0/(n*(n-1)))*sum*sum << endl;
}
