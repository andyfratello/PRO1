#include <vector>
#include <string>
#include <iostream>
using namespace std;

struct Student {
    int idn;
    string name;
    double mark;
    bool repeater;
};

void information(const vector<Student>& stu, double& min, double& max, double& avg) {
    int n = stu.size();
    int count = 0;
    max = 0;
    min = 10;
    avg = 0;
    for (int i = 0; i < n; ++i) {
        if (not stu[i].repeater and stu[i].mark != -1) {
            if (max < stu[i].mark) max = stu[i].mark;
            if (min > stu[i].mark) min = stu[i].mark;
            avg += stu[i].mark;
            ++count;
        }
    }
    if (count != 0) avg /= count;
    else { 
        max = -1;
        min = -1;
        avg = -1;
    }
}


int main() {
    cout.setf(ios::fixed);
    cout.precision(4); 
    int n;
    while (cin >> n) {
        vector<Student> stu(n);
        for (int i=0; i<n; ++i) {
            cin >> stu[i].mark >> stu[i].repeater;
        }
        double min, max, avg;
        information(stu, min, max, avg);
        cout << min << " " << max << " " << avg << endl;
    }
}
