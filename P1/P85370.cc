#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	double c, i; // c = capital ; i = interest rate
	int t; // t = time
	string s; // interest simple or compound
	cin >> c >> i >> t >> s;
	if (s == "simple") {
		cout << c + c*(i/100)*t;
	} else {
		cout << c * pow((1 + i/100), t);
	} 
	cout << endl;
}
