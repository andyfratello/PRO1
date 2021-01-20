#include <iostream>
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
	if (r1.x_left >= r2.x_right or r1.x_right <= r2.x_left or r1.y_down >= r2.y_up or r1.y_up <= r2.y_down) return 0;
	else return 3;
}


int main() {
	int n;
	cin >> n;
	while (n != 0) {
		Rectangle r1, r2;
		read(r2);
		bool intersection = true;
		--n;
		while (intersection and n != 0) {
			r1.x_left = r2.x_left;
			r1.x_right = r2.x_right;
			r1.y_down = r2.y_down;
			r1.y_up = r2.y_up;
			read(r2);
			if (relationship(r1, r2) == 0) intersection = false;
			else if (relationship(r1, r2) == 1) {
				r2.x_left = r1.x_left;
				r2.x_right = r1.x_right;
				r2.y_down = r1.y_down;
				r2.y_up = r1.y_up;
			} else if (relationship(r1, r2) == 3) {
				if (r1.x_left > r2.x_left) r2.x_left = r1.x_left;
				if (r1.x_right < r2.x_right) r2.x_right = r1.x_right;
				if (r1.y_down > r2.y_down) r2.y_down = r1.y_down;
				if (r1.y_up < r2.y_up) r2.y_up = r1.y_up;
			}
			--n;
		}
		if (not intersection) {
			cout << "empty intersection" << endl;
			while (n != 0) {
				read(r2);
				--n;
			}
		} else {
			cout << "bottom left point = (" << r2.x_left << ", " << r2.y_down << "); top right point = (" << r2.x_right << ", " << r2.y_up << ')' << endl; 
		}
		cin >> n;
	}
}
