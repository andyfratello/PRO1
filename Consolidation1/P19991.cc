#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            char coins;
            cin >> coins;
            if (i == j or n - 1 == i + j) {
                sum += coins - '0';
            }
        }
    }
    cout << sum << endl;
}
