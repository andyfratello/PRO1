#include <iostream>
using namespace std;

int main() {
    int b, n;
    while (cin >> b >> n) {
        int count = 0;
        while (n != 0) {
            ++count;
            n /= b;
        }
        cout << count << endl;
    }
}
