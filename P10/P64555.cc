#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Point {
	int x, y;
};

int distancia(const Point& p) {
	return abs(p.x) + abs(p.y);
}

bool comp(const Point& a, const Point& b) {
	int dist1 = distancia(a);
	int dist2 = distancia(b);
	if (dist1 != dist2) return dist1 < dist2;
	if (a.x != b.x) return a.x < b.x;
	return a.y < b.y;
}

int main() {
	int x, y, n, a, b;
	cin >> x >> y >> n;
	vector<Point> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		v[i].x = a - x;
		v[i].y = b - y;
	}
	sort(v.begin(), v.end(), comp);
	int d_pre = -1;
	for (int i = 0; i < n; ++i) {
		int d = distancia(v[i]);
		if (d > d_pre) {
			cout << "points at distance " << d << endl;
			d_pre = d;
		}
		cout << v[i].x + x << ' ' << v[i].y + y << endl;
	}
}
