#include <iostream>
using namespace std; //uppercase and lowercase letters

int main() {
    char c;
    cin >> c;
    if(c >= 'A' and c <= 'Z') cout << char(c - char('A') + char('a'));
    else cout << char(c - char('a') + char('A'));
    cout << endl;
}
