#include <iostream>
#include <vector>
using namespace std;

struct Point {
	double x, y;
};

bool prop1(const vector<Point>& v) {
	int count = 0;
	for (int i = 0; i < v.size() - 1; ++i) {
		if (v[i].x != v[i + 1].x or v[i].y != v[i + 1].y) ++count;
	}
	if (count >= 2) return true;
	return false;
}

bool prop2(const vector<Point>& v) {
	double sumx = 0;
	double sumy = 0;
	for (int i = 0; i < v.size(); ++i) {
		sumx += v[i].x;
		sumy += v[i].y;
	}
	if (sumx == sumy) return true;
	return false;
}

bool barycenter(const vector<Point>& v, Point& b) { // prop3
	for (int i = 0; i < v.size(); ++i) {
		if (b.x == v[i].x and b.y == v[i].y) return true;
	} 
	return false;
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	while (cin >> n) {
		vector<Point> v(n);
		double sumx = 0;
		double sumy = 0;
		for (int i = 0; i < n; ++i) {
			cin >> v[i].x >> v[i].y;
			sumx += v[i].x;
			sumy += v[i].y;
		}
		Point b;
		b.x = sumx/n;
		b.y = sumy/n;
		cout << "baricentre: (" << b.x << ',' << b.y << ')' << endl;
		if (not prop1(v)) cout << "el vector no compleix la propietat 1" << endl;
		else if (not prop2(v)) cout << "el vector no compleix la propietat 2" << endl;
		else if (barycenter(v, b)) cout << "el vector no compleix la propietat 3" << endl;
		else cout << "vector normalitzat" << endl;
	}
}
