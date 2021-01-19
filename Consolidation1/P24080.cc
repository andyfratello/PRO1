#include <iostream>
using namespace std;

int main() {
    int n;
    bool first = true;
    while (cin >> n) {
        if (first) first = false;
        else cout << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) cout << n;
            cout << endl;
        }
    }
}
