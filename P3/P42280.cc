#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int sum = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            char coins;
            cin >> coins;
            sum += coins - '0';
        }
    }
    cout << sum << endl;
}
