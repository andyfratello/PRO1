#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) { // High part
            for (int j = 0; j < n - 1 - i; ++j) cout << ' ';
            for (int j = 0; j < n + 2*i; ++j) cout << 'X';
            cout << endl;
        }
        for (int i = 0; i < n - 2; ++i) { // Middle part
            for (int j = 0; j < n + 2*(n - 1); ++j) cout << 'X';
            cout << endl;
        }
        for (int i = n-1; i >= 0; --i) { // High part
            for (int j = 0; j < n - 1 - i; ++j) cout << ' ';
            for (int j = 0; j < n + 2*i; ++j) cout << 'X';
            cout << endl;
        }
        cout << endl;
    }
}
