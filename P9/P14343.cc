#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Submission {
	string idn;
	string exer;
	int time;
	string res;
};

struct Students {
	string idn;
	int num;
};

struct Results {
	Students green_sub;
	Students green_ex;
	Students red_ex;
	Students tried_ex;
	Students max_temp;
};

typedef vector<Submission> History;

History read_vector(int n) {
	History v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i].idn >> v[i].exer >> v[i].time >> v[i].res;
	}
	return v;
}

bool comp(const Submission& a, const Submission& b) {
	if (a.idn == b.idn) return a.exer < b.exer;
	return a.idn < b.idn; 
}

void update(int intent, Students& actual, const string& alumneint) {
	if (intent > actual.num) {
		actual.idn = alumneint;
		actual.num = intent;
	}
}

void calculate_results(const History& v, Results& r) {
	int i = 0;
	r.green_sub.num = 0;
	r.green_ex.num = 0;
	r.red_ex.num = 0;
	r.tried_ex.num = 0;
	r.max_temp.num = 0;
	while (i < v.size()) {
		string alumne = v[i].idn;
		int aux_green_sub = 0;
		int aux_green_ex = 0;
		int aux_red_ex = 0;
		int aux_tried_ex = 0;
		while (i < v.size() and v[i].idn == alumne) {
			string exercici = v[i].exer;
			bool green = false;
			bool yellow = false;
			bool red = false;
			while (i < v.size() and v[i].idn == alumne and v[i].exer == exercici) {
				if (v[i].res == "yellow") yellow = true;
				if (v[i].res == "red") red = true;
				if (v[i].res == "green") {
					green = true;
					++aux_green_sub;
				}
				update(v[i].time, r.max_temp, alumne);
				++i;
			}
			if (green) ++aux_green_ex;
			if (red and not green and not yellow) ++aux_red_ex;
			++aux_tried_ex;
		}
		update(aux_green_ex, r.green_ex, alumne);
		update(aux_red_ex, r.red_ex, alumne);
		update(aux_tried_ex, r.tried_ex, alumne);
		update(aux_green_sub, r.green_sub, alumne);
	}
}

void pinta(const Students& a, const string& s, bool pintanum) {
	cout << s;
	if (a.num != 0) {
		cout << a.idn;
		if (pintanum) cout << " (" << a.num << ')';
		cout << endl;
	} else cout << '-' << endl;
}

void write_results(const Results& r) {
	pinta(r.green_sub, "student with more green submissions:       ", true);
	pinta(r.green_ex, "student with more green exercises:         ", true);
	pinta(r.red_ex, "student with more red exercises:           ", true);
	pinta(r.tried_ex, "student with more tried exercises:         ", true);
	pinta(r.max_temp, "student who has done the last submission:  ", false);
}

int main() {
	int n;
	cin >> n;
	History v = read_vector(n);
	sort(v.begin(), v.end(), comp);
	Results r;
	calculate_results(v, r);
	write_results(r);
}
