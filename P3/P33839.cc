#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int a = n;
        int sum = 0;
        while (n != 0) {
            sum += n%10;
            n /= 10;
        }
        cout << "The sum of the digits of " << a << " is " << sum << '.' << endl;
    }
}
