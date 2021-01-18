#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        // tractar fila i-Ã¨ssima
        for (int j = 0; j < n - i; ++j) cout << '+';
        cout << '/';
        for (int j = 0; j < i - 1; ++j) cout << '*';
        cout << endl;
    }
}

/* Una manera menys eficient de fer-ho 

        for (int j = n; j > 0; --j) {
            if (i > j) cout << '*';
            else if (i < j) cout << '+';
            else cout << '/';
        }
*/
