#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int LENGTH_ALPHABET = 'z' - 'a' + 1;

char most_frequent_letter(const string& s) {
	vector<char> v(s.begin(), s.end());
	sort(v.begin(), v.end());
	int n = v.size();
	int count = 1;
	int count_max = 0;
	char letter = '#';
	char letter_max = '#';
	for (int i = 0; i < n; ++i) {
		if (letter == v[i]) ++count;
		else count = 1;
		if (count_max < count) {
			count_max = count;
			letter_max = v[i];
		}
		letter = v[i];
	}
	return letter_max;
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	cin >> n;
	double sum = 0;
	vector<string> s(n);
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
		sum += s[i].length();
	}
	double avg = sum/n;
	cout << avg << endl;
	for (int i = 0; i < n; ++i) {
		if (s[i].length() >= avg) {
			cout << s[i] << ": " << most_frequent_letter(s[i]) << endl;
		}
	}
}
