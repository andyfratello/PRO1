#include <iostream>
#include <cmath>
using namespace std;
/*
int sum_divisors(int n) {
	int sum = 0;
	for (int i = 1; i < sqrt(n); ++i) {
		if (n%i == 0) sum += i;
	} 
	for (int i = sqrt(n); i > 0; --i) {
		if (n%i == 0) sum += n/i;
	}
	return sum;
}*/

int sum_divisors(int a) {
    int z = a / 2, sum = 0;
    while(z >= 1) {
        if(a % z == 0) sum += z;
        --z;
    }
    return sum;
}

int main() {
	int prev, next;
	bool first = true;
	while (cin >> prev >> next) {
		if (prev != next and sum_divisors(prev) == next and sum_divisors(next) == prev) {
			if (first) first = false;
			else cout << ',';
			cout << '(' << prev << ' ' << next << ')';
		}
		prev = next;
	}
	cout << endl;
}
