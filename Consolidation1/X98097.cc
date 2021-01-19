#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int odd = 0;
    int even = 0;
    int a = n/10;
    while (n != 0) {
        odd += n%10;
        n /= 100;
    }
    while (a != 0) {
        even += a%10;
        a /= 100;
    }
    cout << odd << ' ' << even << endl;
    if (even != 0 and odd >= even and odd % even == 0) cout << odd << " = " << odd/even << " * " << even;
	else if (odd != 0 and even >= odd and even % odd == 0) cout << even << " = " << even/odd << " * " << odd;
	else if (odd == 0 or even == 0) {
            if (odd == 0) cout << "0 = 0 * " << even;
            else if (even == 0) cout << "0 = 0 * " << odd;
    } else cout << "res";
    cout << endl;
}
