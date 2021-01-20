#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Profes {
	string name;
	int sweets, carrots;
};

// Pre : entren 2 var. de tipus Profe
// Post : ordena les var. segons el num de dolços, num de pastanagues, qui tingui el nom més curt o per ordre alfabètic del nom
bool comp(const Profes& a, const Profes& b) {
	if (a.sweets != b.sweets) return a.sweets > b.sweets;
	else if (a.carrots != b.carrots) return a.carrots > b.carrots;
	else if (a.name.length() != b.name.length()) return a.name.length() < b.name.length();
	return a.name < b.name;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int t;
		cin >> t;
		vector<Profes> v(t);
		for (int j = 0; j < t; ++j) { //read vector
			cin >> v[j].name >> v[j].sweets >> v[j].carrots;
		}
		sort(v.begin(), v.end(), comp);
		for (int j = 0; j < t; ++j) cout << v[j].name << endl;
		cout << endl;
	}
}
