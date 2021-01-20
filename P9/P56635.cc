#include <iostream>
#include <cmath>
using namespace std;

struct Rectangle {
	int x_left, x_right, y_down, y_up;
};

void read(Rectangle& r) {
	cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}

int relationship(const Rectangle& r1, const Rectangle& r2) {
	if (r1.x_left == r2.x_left and r1.x_right == r2.x_right and r1.y_down == r2.y_down and r1.y_up == r2.y_up) return 4;
	if (r1.x_left >= r2.x_left and r1.x_right <= r2.x_right and r1.y_down >= r2.y_down and r1.y_up <= r2.y_up) return 1;
	if (r1.x_left <= r2.x_left and r1.x_right >= r2.x_right and r1.y_down <= r2.y_down and r1.y_up >= r2.y_up) return 2;
	if (r1.x_left > r2.x_right or r1.x_right < r2.x_left or r1.y_down > r2.y_up or r1.y_up < r2.y_down) return 0;
	else return 3;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		Rectangle r1;
		read(r1);
		Rectangle r2;
		read(r2);
		int rel = relationship(r1, r2);
		if (rel == 1) cout << "the first rectangle is inside the second one" << endl;
		else if (rel == 2) cout <<  "the second rectangle is inside the first one" << endl;
		else if (rel == 3) cout << "rectangles intersect" << endl;
		else if (rel == 4) cout << "rectangles are identical" << endl;
		else cout << "rectangles do not intersect" << endl;
	}
}
