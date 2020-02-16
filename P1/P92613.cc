#include <iostream>
using namespace std; //rounding

int main() {
    double n;
    cin >> n;
    if(n == int(n)) cout << int(n) << ' ' << int(n) << ' ';
    else cout << int(n) << ' ' << int(n + 1) << ' ';
    if(n - int(n) >= 0.5) cout << int(n + 1);
    else cout << int(n);
    cout << endl;
}
