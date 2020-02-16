#include <iostream>
using namespace std;

int main() {
	int y, d, h, m, s;
	cin >> y >> d >> h >> m >> s;
	cout << y*365*24*3600 + d*24*3600 + h*3600 + m*60 + s << endl;
}
