#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s == "rectangle") {
            double a, b;
            cin >> a >> b;
            cout << a*b;
        } else {
            double r;
            cin >> r;
            cout << r * r * M_PI;
        }
        cout << endl;
    }
}
