//#include<iostream>
//using namespace std;
//class shape {
//public:
//	shape() {}
//	string colour;
//	shape(string colour) {
//		this->colour = colour;
//	}
//	virtual float area() {
//		cout << "Shape Area: ";
//		return 0;
//	}
//
//	void getcolour(string colour) {
//		this->colour = colour;
//		//cout << this->colour;
//	}
//
//	void setcolour() {
//		cout << colour;
//	}
//	
//
//};
//class triangle :public shape {
//	float base, hieght; string col;
//public:
//	triangle() :shape() {}
//	triangle(float base, float hieght, string col) :shape(col) {
//		this->base = base;
//		this->hieght = hieght;
//	}
//
//	float area() {
//		return ((base * hieght) / 2);
//	}
//	void getbase(float base) {
//		this->base = base;
//	}
//	void gethieght(float hieght) {
//		this->hieght = hieght;
//	}
//	
//
//};
//class rectangle :public shape {
//	float width, hieght; string col;
//public:
//	rectangle() :shape() { cout << ""; }
//	rectangle(float width, float hieght, string col) :shape(col) {
//		this->width = width;
//		this->hieght = hieght;
//	}
//
//	void getwidth(float width) {
//		this->width = width;
//	}
//	void gethieght(float hieght) {
//		this->hieght = hieght;
//	}
//	float area() {
//		return (width * hieght);
//	}
//
//	
//};
//class circle :public shape {
//	float radius; string col;
//public:
//	circle() :shape() {}
//	circle(float radius, string col) :shape(col) {
//		this->radius = radius;
//	}
//
//	float area() {
//		return (3.14 * radius * radius);
//	}
//	void getradius(float radius) {
//		this->radius = radius;
//	}
//	
//
//};
//
//int sumArea(shape& s1, shape& s2) {
//	return (s1.area() + s2.area());
//}
//int main()
//{
//	triangle t1(1.0, 9.0, "red");
//		circle c1(2, "Blue");
//		rectangle r1(6, 2, "Orange");
//shape s1("Purple");
//cout<< sumArea(t1,c1)<<endl;
//cout<< sumArea(s1,r1)<<endl;
//cout<< sumArea(s1,t1)<<endl;
//}
//
//
//
