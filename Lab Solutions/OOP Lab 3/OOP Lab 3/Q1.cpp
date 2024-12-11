//#include <iostream>
//#include<string>
//using namespace std;
//
//class Student {
//private:
//	string RollNo;
//	int Age;
//	float Cgpa;
//public:
//	void print() {
//		cout << "Roll No: " << RollNo << endl;
//		cout << "Age: " << Age << endl;
//		cout << "Cgpa: " << Cgpa << endl;
//	}
//	Student() {
//		RollNo = "22L - 7919";
//		Age = 18;
//		Cgpa = 2.94;
//
//		cout << "Default Constructor Called.\n";
//		
//	}
//	Student(string r, int a, float c) {
//
//		RollNo = r;
//		Age = a;
//		Cgpa = c;
//		cout << "Over-Loaded/Parametrized Constructor Called.\n";
//	}
//	void getinput() {
//		cout << "Enter Roll No: ";
//		cin >> RollNo;
//		cout << "Enter Age: ";
//		cin >> Age;
//		cout << "Enter Cgpa: ";
//		cin >> Cgpa;
//	}
//	void setter1(string roll) 
//	{
//		RollNo = roll;
//	}
//
//	void setter2(int age_val) 
//	
//	{
//		Age = age_val;
//	}
//
//	void setter3(float gpa) 
//	{
//		Cgpa = gpa;
//		
//	}
//
//	string getter1() 
//	
//	{
//		return RollNo;
//	}
//
//	int getter2()
//
//	{
//		return Age;
//	}
//
//	float getter3()
//
//	{
//		return Cgpa;
//	}
//
//};
//
//int main()
//{
//	Student std_1;
//	std_1.print();
//	cout << endl;
//	Student std_2("22L-1234", 19, 3.46);
//	std_2.print();
//	cout << endl;
//	std_1.getinput();
//	cout << endl;
//	std_1.print();
//	cout << endl;
//
//	Student std_3;
//
//	std_3.setter1("22L-7888");
//	std_3.setter2(19);
//	std_3.setter3(3.3);
//
//	cout << "Roll No: ";
//
//	cout << std_3.getter1() << endl;
//
//	cout << "Age: ";
//	cout << std_3.getter2() << endl;
//
//	cout << "CGPA: ";
//	cout << std_3.getter3() << endl;
//}
//
//
//
