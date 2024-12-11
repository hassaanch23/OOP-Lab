//#include<iostream>
//using namespace std;
//
//class BasicShape {
//	double area;
//
//public:
//	BasicShape(double a = 0) {
//		area = a;
//	}
//
//	double getArea() {
//		return area;
//	}
//	
//	void setArea(double a) {
//		area = a;
//	}
//
//	void virtual calcArea() = 0;
//};
//
//class Circle: public BasicShape {
//	long int centerX,centerY;
//	double radius;
//
//public:
//	Circle(long int x=0, long int y=0, double r=0) {
//		centerX = x; centerY = y; radius = r;
//		calcArea();
//	}
//
//	long int getcenterX() {
//		return centerX;
//	}
//
//	long int getcenterY() {
//		return centerY;
//	}
//
//	void calcArea() override
//	{
//		double a;
//		a = 3.14 * radius * radius;
//		setArea(a);
//	}
//};
//
//class Rectangle :public BasicShape {
//	long int width, length;
//public:
//	Rectangle(long int w, long int l) {
//		width = w; length = l;
//		calcArea();
//	}
//
//	long getwidth() const {
//		return width;
//	}
//
//	long getlength() const {
//		return length;
//	}
//
//	void calcArea() override {
//		double a;
//		a = width * length;
//		setArea(a);
//	}
//};
//
//int main()
//{
//	Circle c(4, 3, 4);
//	Rectangle r(15, 25);
//
//	cout << "Area of Circle: " << c.getArea() << endl << endl;
//	cout << "Area of Rectangle: " << r.getArea() << endl;
//	return 0;
//
//}