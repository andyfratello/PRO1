#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    int sum = 0;
    if(n < 10) sum = n;
    else sum += (n % 10 + sum_of_digits(n/10));
    return sum;
}

bool is_multiple_3(int n) {
    if(sum_of_digits(n) % 3 == 0) return true;
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        cout << (is_multiple_3(n) ? "true" : "false") << endl;
    }
}
