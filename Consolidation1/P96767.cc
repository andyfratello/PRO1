#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
    cout.precision(4);
    double x;
    cin >> x;
    double c, sum = 0;
    int count = -1;
    while (cin >> c) {
    	++count;
    	sum += c*pow(x, count);
    }
    cout << sum << endl;
}
