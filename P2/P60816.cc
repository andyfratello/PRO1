#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) cout << 0;
    else {
        while (n > 0) {
            int x = n%16;
            n /= 16;
            if (x < 10) cout << x; 
            else cout << char(x - 10 + 'A');
        }
    }
    cout << endl;
}
