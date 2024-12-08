//#include <iostream>
//using namespace std;
//
//class shape {
//protected:
//    double length;
//    double breadth;
//    double height;
//};
//
//class painting {
//public:
//    double getcost(double area) {
//        const double paintcost = 2.5;
//        return area * paintcost;
//    }
//};
//
//class square : public shape, public painting {
//public:
//    double getarea() {
//        return length * length;
//    }
//    friend istream& operator>>(istream& is, square& s) {
//        cout << "Enter Length of Square: ";
//        is >> s.length;
//        return is;
//    }
//    friend ostream& operator<<(ostream& os, const square& s) {
//        os << "Length of square = " << s.length << endl;
//        return os;
//    }
//};
//
//class rectangle : public shape, public painting {
//public:
//    double getarea() {
//        return length * breadth;
//    }
//    friend istream& operator>>(istream& is, rectangle& r) {
//        cout << "Enter Length of Rectangle: ";
//        is >> r.length;
//        cout << "Enter Breadth of Rectangle: ";
//        is >> r.breadth;
//        return is;
//    }
//    friend ostream& operator<<(ostream& os, const rectangle& r) {
//        os << "Length of Rectangle = " << r.length << endl;
//        os << "Breadth of Rectangle = " << r.breadth << endl;
//        return os;
//    }
//};
//
//class triangle : public shape, public painting {
//public:
//    double getarea() {
//        return 0.5 * breadth * height;
//    }
//    friend istream& operator>>(istream& is, triangle& t) {
//        cout << "Enter Breadth of Triangle: ";
//        is >> t.breadth;
//        cout << "Enter Height of Triangle: ";
//        is >> t.height;
//        return is;
//    }
//    friend ostream& operator<<(ostream& os, const triangle& t) {
//        os << "Breadth of Triangle =  " << t.breadth << endl;
//        os << "Height of Triangle = " << t.height << endl;
//        return os;
//    }
//};
//
//int main() {
//    square obj1;
//    cin >> obj1;
//    cout << endl << obj1;
//    cout << "Area of the Square = " << obj1.getarea() << endl;
//    cout << "Paint cost for the Square =  " << obj1.getcost(obj1.getarea()) << endl << endl;
//
//    rectangle obj2;
//    cin >> obj2;
//    cout << endl << obj2;
//    cout << "Area of the Rectangle = " << obj2.getarea() << endl;
//    cout << "Paint cost for the Rectangle =  " << obj2.getcost(obj2.getarea()) << endl << endl;
//
//    triangle obj3;
//    cin >> obj3;
//    cout << endl << obj3;
//    cout << "Area of the Triangle = " << obj3.getarea() << endl;
//    cout << "Paint cost for the Triangle = " << obj3.getcost(obj3.getarea()) << endl;
//
//    return 0;
//}
