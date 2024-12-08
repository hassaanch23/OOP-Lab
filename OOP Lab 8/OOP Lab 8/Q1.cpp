//#include<iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int X=0,int Y=0) {
//	//	x = new int; y = new int;
//		x = X; y = Y;
//		cout << "Point() Called." << endl;
//	}
//	void Print() {
//		cout << "The coordinates are (" << x << "," << y << ")" << endl;
//	}
//	~Point() {
//		cout << "~Point() Called." << endl;
//	}
//};
//
//class Circle {
//	Point center;
//	float radius;
//public:
//	Circle() {};
//	Circle(int X, int Y, float r) :center(X, Y) {
//		radius = r;
//		cout << "Circle() Called." << endl;
//	}
//
//	~Circle() {
//		cout << "~Circle() Called." << endl;
//	}
//	void print() {
//		cout << "Center: ";
//		center.Print();
//		cout << "Radius: " << radius << endl;
//	}
//};
//
//class Quadrilateral {
//	Point w; Point x; Point y; Point z;
//public:
//	Quadrilateral(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) :w(x1, y1), x(x2, y2), y(x3, y3), z(x4, y4) {
//		cout << "Quadrilateral() Called." << endl;
//	}
//	~Quadrilateral() {
//		cout << "~Quadrilateral Called." << endl;
//	}
//	void print() {
//		cout << "Point 1: ";
//		w.Print();
//		cout << "Point 2: ";
//		x.Print();
//		cout << "Point 3: ";
//		y.Print();
//		cout << "Point 4: ";
//		z.Print();
//	}
//};
//int main() {
//	Circle c(3, 4, 2.5);
//	c.print();
//
//	Quadrilateral Q(1, 0, 0, 1, 1, 1, 0, 0);
//	Q.print();
//}