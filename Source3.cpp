//
//#include<iostream>
//#include<cmath>
//using namespace std;
//class point {
//private:
//	int x1;
//	int y1;
//	int x2;
//	int y2;
//	double dist;
//public:
//	point() {
//		
//	}
//	void setx1(int p1x) {
//		int x1 = p1x;
//	}
//	int getx1() {
//		return x1;
//	}
//	void setx2(int p2x) {
//		int x2 = p2x;
//	}
//	int getx2() {
//		return x2;
//	}
//	void sety1(int p1y) {
//		int y1 = p1y;
//	}
//	int gety1() {
//		return y1;
//	}
//	void sety2(int p2y) {
//		int y2 = p2y;
//	}
//	int gety2() {
//		return y2;
//	}
//	double distance(int x1,int x2,int y1,int y2) {
//		dist = sqrt((x2-x1)+(y2-y1));
//		return dist;
//	}
//};
//
//int main() {
//	point p;
//	p.setx1(2);
//	p.sety1(3);
//	p.setx2(4);
//	p.sety2(5);
//	cout<<"Distance : "<<p.distance(2, 4, 3, 5);
//
//
//	return 0;
//}
#include<iostream>
#include<cmath>
using namespace std;
class point {
private:
	int x;
	int y;
public:
	point(int x=0, int y=0):x(x),y(y){}
	void setx(int px) {
		int x = px;
	}
	int getx() {
		return x;
	}

	void sety(int py) {
		int y = py;
	}
	int gety() {
		return y;
	}
	
	double distance(point &other) {
		double dist;
		dist = sqrt((x - other.getx()) + (y - other.gety()));
		return dist;
	}
};

int main() {
	point p1(2, 3);
    point p2(4, 5);
	cout << "Distance : " << p1.distance(p2);
	return 0;
}