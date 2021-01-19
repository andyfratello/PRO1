#include <iostream>
using namespace std;

int main () {
    char c;
    cin >> c;
    if (c >= '0' and c <= '9') cout << "digit";
    else if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')) cout << "lletra";
    else cout << "res";
    cout << endl;
}
