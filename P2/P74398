#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    for (int i = 2; i <= 16; ++i) {
        int count = 0;
        cout << "Base " << i << ": ";
        int x = n;
        while (x > 0) {
            x /= i;
            ++count;
        }
        cout << count << " cifras." << endl;
    }
}
