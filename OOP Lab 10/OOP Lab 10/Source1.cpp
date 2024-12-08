//#include<iostream>
//using namespace std;
//
//class Faculty {
//public:
//	Faculty() {};
//
//	virtual void Print() = 0;
//};
//
//class Administrator:virtual public Faculty {
//public:
//	void Print() {
//		cout << "Class Name is Administrator." << endl;
//	}
//};
//
//class Teacher:virtual public Faculty {
//public:
//	void Print() {
//		cout << "Class Name is Teacher." << endl;
//	}
//};
//
//class AdministratorTeacher:virtual public Administrator,virtual public Teacher {
//public:
//	void Print() {
//		cout << "Class Name is Administrator Teacher." << endl;
//	}
//};
//
//int main() {
//	Faculty* obj[3];
//	Administrator A; Teacher T; AdministratorTeacher AT;
//
//	A.Print(); T.Print(); AT.Print();
//}