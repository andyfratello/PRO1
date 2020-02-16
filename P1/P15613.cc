#include <iostream>
using namespace std; //temperatures

int main() {
    int n;
    cin >> n;
    if(n > 30) {
        cout << "it's hot" << endl;
        if(n >= 100) cout << "water would boil" << endl;
    } else if(n < 10) {
        cout << "it's cold" << endl;
        if(n <= 0) cout << "water would freeze" << endl;
    } else cout << "it's ok" << endl;
}
