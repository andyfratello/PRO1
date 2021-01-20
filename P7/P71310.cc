#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v) {
	int n = v.size();
	double sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += u[i]*v[i];
	}
	return sum;
}

void read_vectors(vector<double> u, vector<double> v) {
	int n = u.size(); // u.size() == v.size()
	for (int i = 0; i < n; ++i) {
		cin >> u[i];
		cin >> v[i];
	}
}

int main() {
	int n;
	cin >> n;
	vector<double> u(n);
	vector<double> v(n);
	read_vectors(u, v);
	cout << scalar_product(u, v) << endl;
}
