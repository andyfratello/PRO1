#include <iostream>
using namespace std;

int main() {
    int n, m;
    bool first = true;
    while (cin >> n >> m) {
        if (first) first = false;
        else cout << endl;
        int k = 9;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (k == -1) k = 9;
                cout << k;
                --k;
            }
            cout << endl;
        }
    }
}
