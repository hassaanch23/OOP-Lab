//#include<iostream>
//using namespace std;
//class Teacher {
//	int EmployeeID;
//	char* Name;
//public:
//	Teacher(int ID, const char* n)
//	{
//		EmployeeID = ID;
//		Name = new char[strlen(n) + 1];
//		for (int i = 0; i < strlen(n) + 1; i++)
//		{
//			Name[i] = n[i];
//		}
//	}
//	void Display()
//	{
//		cout << "Teacher ID: " << EmployeeID << endl;
//		cout << "Teacher Name: " << Name << endl;
//	}
//	~Teacher()
//	{
//		delete[]Name;
//		Name = nullptr;
//	}
//};
//class Student {
//	char* roll_no;
//	char* name;
//	Teacher* TeacherList;
//public:
//	Student(const char* rn, const char* n, Teacher* t)
//	{
//		roll_no = new char[strlen(rn) + 1];
//		for (int i = 0; i < strlen(rn) + 1; i++)
//		{
//			roll_no[i] = rn[i];
//		}
//		name = new char[strlen(n) + 1];
//		for (int i = 0; i < strlen(n) + 1; i++)
//		{
//			name[i] = n[i];
//		}
//		this->TeacherList = t;
//	}
//	void Display()
//	{
//		cout << "Student Roll No: " << roll_no << endl;
//		cout << "Student Name: " << name << endl;
//		TeacherList->Display();
//	}
//	~Student()
//	{
//		delete[]roll_no;
//		roll_no = nullptr;
//		delete[]name;
//		name = nullptr;
//	}
//
//};
//int main()
//{
//	Teacher t1(111, "ABC");
//	Teacher t2(112, "DEF");
//	Student s1("22L-7919", "Muhammad Hassaan", &t1);
//	Student s2("22l-7885", "Zohaib Rashid", &t2);
//	s1.Display();
//	cout << endl;
//	s2.Display();
//
//
//}