//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student {
//	string RollNo, Name, Degree, Address;
//	double CNIC;
//public:
//	Student() {
//		cout << "Default Constructor Called." << endl;
//		Name = "Hassaan";
//		RollNo = "22L-7919";
//		CNIC = 3120213373059;
//		Degree = "Software Engineering";
//		Address = "Mohajir Colony Bahawalpur";	
//	}
//	void Print() {
//		cout << "Name: " << Name << endl;
//			cout << "Roll No: " << RollNo << endl;
//			cout << "CNIC: " << CNIC << endl;
//			cout << "Degree: " << Degree << endl;
//			cout << "Address " << Address << endl;
//	}
//	Student(string n, string r, double c,string d,string a) {
//
//		Name = n;
//		RollNo = r;
//		CNIC = c;
//		Degree = d;
//		Address = a;
//
//		cout << "Over-Loaded/Parametrized Constructor Called.\n";
//	}
//	void getinput() {
//		cout << "Enter Name: ";
//		cin >> Name;
//		cout << "Enter Roll No: ";
//		cin >> RollNo;
//		cout << "Enter CNIC: ";
//		cin >> CNIC;
//		cout << "Enter Degree: ";
//		cin >> Degree;
//		cout << "Enter Address: ";
//		cin >> Address;
//	}
//};
//int main() {
//	Student Arr[3];
//	for (int i = 0; i < 3; i++) {
//		Arr[i].getinput();
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < 3; i++) {
//		Arr[i].Print();
//		cout << endl;
//	}
//	
//}