#include <iostream>
#include <cmath>
using namespace std;

struct Clock {
	int h;	// hours (0 <= h < 24)
	int m;	// minutes (0 <= m < 60)
	int s;	// seconds (0 <= s < 60)
};

Clock midnight() {
 	Clock r;
 	r.h = 0;
 	r.m = 0;
 	r.s = 0;
 	return r;
}

void increase(Clock& r) {
	++r.s;
	if (r.s > 59) {
		r.s = 0;
		++r.m;
	}
	if (r.m > 59) {
		r.m = 0;
		++r.h;
	}
	if (r.h > 23) {
		r.h = 0;
	}

}

void print(const Clock& r) {
	if (r.h < 10) cout << '0';
	cout << r.h << ':';
	if (r.m < 10) cout << '0';
	cout << r.m << ':'; 
	if (r.s < 10) cout << '0';
	cout << r.s << endl;
}

int main() {
	Clock r = midnight();
	for (int i = 0; i <= 25*60*60; ++i) {
		print(r);
		increase(r);
	}
}
