#include <iostream>
#include <cmath>
using namespace std;

struct Point {
	double x, y;
};

struct Circle {
	Point center;
	double radius;
};

double distancia(const Point&a, const Point&b) {
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

void move(Point&p1, const Point&p2) {
	p1.x += p2.x;
	p1.y += p2.y;
}

void scale(Circle&c, double sca) {
	c.radius *= sca;
}

void move(Circle&c, const Point&p) {
	c.center.x += p.x;
	c.center.y += p.y;
}

bool is_inside(const Point&p, const Circle&c) {
	return(distancia(p, c.center) < c.radius);
}

/*
int main() {
	cout.setf(ios::fixed);
    cout.precision(4);
  	string s;
  	double x1, y1, radi, sca, x2, y2, x3, y3;
  	while (cin >> s >> x1 >> y1 >> radi >> s >> s >> sca >> s >> x2 >> y2 >> s >> x3 >> y3) {
      	Circle c;
      	c.center.x = x1;
      	c.center.y = y1;
      	c.radius = radi;
     	  scale(c, sca);
      	cout << c.center.x << " " << c.center.y << " " << c.radius << endl;

      	c.center.x = x1;
      	c.center.y = y1;
       	c.radius = radi;
      	Point p;
      	p.x = x2;
      	p.y = y2;
      	move(c, p);
      	cout << c.center.x << " " << c.center.y << " " << c.radius << endl;

      	c.center.x = x1;
     	  c.center.y = y1;
      	c.radius = radi;
      	Point q;
      	q.x = x3;
      	q.y = y3;
      	cout << is_inside(q, c) << endl;

      	move(q, p);
      	cout << q.x << " " << q.y << endl;
      	cout << endl;
  	}
}*/
