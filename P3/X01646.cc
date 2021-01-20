#include <iostream>
using namespace std;

int main() {
    int n, b;
    cin >> b;
    while (cin >> n) {
        int a = n;
        int sum = 0;
        while (n != 0) {
            sum += n%b;
            n /= b;
        }
        cout << a << ": " << sum << endl;
    }
}
