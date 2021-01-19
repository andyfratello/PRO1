#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    char a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    int a, b, c;
    //a
    if (x < y and x < z) a = x;
    else if (y < x and y < z) a = y;
    else a = z;
    //b
    if ((x > y and x < z) or (x < y and x > z)) b = x;
    else if ((y > x and y < z) or (y < x and y > z)) b = y;
    else b = z;
    //c
    if (x > y and x > z) c = x;
    else if (y > x and y > z) c = y;
    else c = z;
    
    if (a1 == 'A') cout << a;
    else if (a1 == 'B') cout << b;
    else cout << c;
    cout << ' ';
    if (b1 == 'A') cout << a;
    else if (b1 == 'B') cout << b;
    else cout << c;
    cout << ' ';
    if (c1 == 'A') cout << a;
    else if (c1 == 'B') cout << b;
    else cout << c;
    cout << endl;
}
