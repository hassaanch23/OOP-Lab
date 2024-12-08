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
//	/*virtual ~shape()
//	{
//		cout << "~shape()" << endl;
//	}*/
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
//	/*~triangle() {
//		cout << "~triangle()" << endl;
//	}*/
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
//	/*~rectangle() {
//		cout << "~rectangle" << endl;
//	}*/
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
//	/*~circle() {
//		cout << "~circle" << endl;
//	}*/
//
//};
//
//int sumArea(shape& s1, shape& s2) {
//	return (s1.area() + s2.area());
//}
//
//
//
//int main() {
//	triangle t1(1.0, 9.0, "Red");
//	circle c1(2, "Blue");
//	rectangle r1(6, 2, "Orange");
//	shape s1("Purple");
//
//	
//	cout << sumArea(t1, c1) << endl;
//	cout<< sumArea(s1,r1)<<endl;
//	cout<< sumArea(s1,t1)<<endl;
//
//	shape** shapearray = new shape * [5];
//	triangle t;
//	rectangle r;
//	circle c; float y;
//	for (int i = 0; i < 4; i++) {
//		int check;
//		cout << "\nPress\n1 for a Triangle\n2 for Rectangle \n3 for a Circle." << endl;
//
//		cin >> check;
//		switch (check)
//		{
//		case 1:
//		{
//			cout << "--------------------------------" << endl <<
//				"enter the data of triangle" << endl;
//			t.colour = "white";
//			cout << "enter the base:" << endl;
//			cin >> y;
//			t.getbase(y);
//			cout << "enter the hieght:" << endl;
//			cin >> y;
//			t.gethieght(1.3);
//			shapearray[i] = &t;
//			break;
//		}
//		case 2:
//		{
//			cout << "--------------------------------" << endl <<
//				"enter the data of rectangle:" << endl;
//			r.colour = "black";
//			cout << "enter the hieght:" << endl;
//			cin >> y;
//			r.gethieght(y);
//			cout << "enter the hieght:" << endl;
//			cin >> y;
//			r.getwidth(y);
//			shapearray[i] = &r;
//			break;
//		}
//		case 3:
//		{
//			cout << "--------------------------------" << endl <<
//				"enter the data of circle" << endl;
//			c.colour = "blue";
//			cout << "enter the radius:" << endl;
//			cin >> y;
//			c.getradius(y);
//			shapearray[i] = &c;
//			break;
//		}
//	defualt:
//		{
//			cout << "wrong enter  number" << endl;
//			break;
//		}
//		}
//	}
//	cout << "---------------------------------------" << endl <<
//		"the data above entering is following " << endl;
//	for (int i = 0; i < 3; i++) {
//		cout << shapearray[i]->area() << "    ";
//		shapearray[i]->setcolour();
//		cout << endl;
//	}
//	delete[]shapearray;
//	cout << "---------------------------------------------" << endl;
//
//}