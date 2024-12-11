#include <iostream>
using namespace std;
class Student
{
private:
	int size;
	int* marks;
public:
	Student()
	{
		size = 0;
		marks = NULL;

	}
	Student(int A[], int s)
	{
		size = s;
		marks = new int[s];
		for (int i = 0; i < s; i++)
		{
			marks[i] = A[i];
		}

	}
	void scaleup()
	{
		for (int i = 0; i < size; i++)
		{
			if (marks[i] > 45 || marks[i] < 95)
			{
				marks[i] += 5;
			}
			else if (marks[i] > 95)
			{
				marks[i] = 100;
			}
			else
			{
				cout << "Marks sholud be greater than 45." << endl;
			}
		}
	}
	void printinfo()
	{
		cout << "Marks are: " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << marks[i] << "\t";
		}
		cout << endl;
		cout << endl;
	}
	~Student()
	{
		delete[]marks;
		marks = NULL;
	}


};
int main()
{
	int arr[5] = { 55, 78, 32, 64, 90 };
	int size = 5;
	Student std(arr, size);
	std.printinfo();
	std.scaleup();
	std.printinfo();

}
