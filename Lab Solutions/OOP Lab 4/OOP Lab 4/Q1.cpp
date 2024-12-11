//#include <iostream>
//#include "Q1.h"
//using namespace std;
//int main() {
//	BiggerInt Obj, Obj4;
//	int size;
//
//	cout << "Enter the size of Array: ";
//	cin >> size;
//	int* Array = new int[size];
//
//	for (int i = 0; i < size; i++) {
//		cout << "Index " << i << ": ";
//		cin >> Array[i];
//	}
//	BiggerInt Obj2(Array, size);
//	BiggerInt Obj3(Obj2);
//	Obj3.display();
//
//	Obj.Assign(Obj3);
//	cout << "\nAssigned: ";
//	Obj.display();
//
//	const int Array2[] = { 1, 2, 3, 4 };
//	cout << "\nAssigned (using int array): ";
//	Obj4.Assign(Array2, 4);
//	Obj4.display();
//
//	Obj2.Append(Obj3);
//	cout << "\n Append: ";
//	Obj2.display();
//
//	Obj2.Append(Array2, 4);
//	cout << "\nAppend (using int array): ";
//	Obj2.display();
//
//	cout << endl << endl;
//	if (Obj3.CompareTo(Array2, 4) == 1) {
//		Obj3.display();
//		cout << " is less than ";
//		for (int i = 0; i < 4; i++) {
//			cout << Array2[i];
//		}
//	}
//	else if (Obj3.CompareTo(Array2, 4) == 2) {
//		Obj3.display();
//		cout << " is greater than ";
//		for (int i = 0; i < 4; i++) {
//			cout << Array2[i];
//		}
//	}
//	else if (Obj3.CompareTo(Array2, 4) == 0) {
//		Obj3.display();
//		cout << " is equal to ";
//		for (int i = 0; i < 4; i++) {
//			cout << Array2[i];
//		}
//	}
//	cout << endl << endl;
//
//	system("pause");
//}