#include<iostream>
using namespace std;

class Faculty {
public:
	Faculty() {}

	virtual void print() = 0;
};

class Administrator :virtual public Faculty
{
public:
	void print(){
		cout << "Administrator" << endl;
	}
};

class Teacher :virtual public Faculty
{
public:
	void print(){
		cout << "Teacher" << endl;
	}
};

class AdministratorTeacher :virtual public Administrator, virtual public Teacher{
public:
	void print(){
		cout << "Administrator Teacher" << endl;
	}
};

int main()
{
	Faculty* ptr[3];
	Administrator obj;
	Teacher obj1;
	AdministratorTeacher obj2;

	ptr[0] = &obj;
	ptr[1] = &obj1;
	ptr[2] = &obj2;

	for (int i = 0; i < 3; i++)
	{
		ptr[i]->print();
		cout << endl;
	}

	return 0;
}
