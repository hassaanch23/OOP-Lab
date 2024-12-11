//#include<iostream>
//#include <string>
//using namespace std;
//
//class BiggerInt {
//	int* big_int;
//	int int_length;
//public:
//	BiggerInt() {
//		big_int = nullptr;
//	}
//	BiggerInt(const int* Obj, int size) {
//		big_int = new int[size];
//
//		for (int i = 0; i < size; i++) {
//			big_int[i] = Obj[i];
//		}
//		cout << "\nOverLoaded Constructor Called:\n";
//		for (int i = 0; i < size; i++) {
//			cout << big_int[i] << " ";
//		}
//	}
//
//	BiggerInt(const BiggerInt& obj) {
//		big_int = new int(int_length);
//		big_int = obj.big_int;
//		int_length = obj.int_length;
//
//		cout << "\nCopy Constructor Called" << endl;
//	}
//
//	void Assign(const BiggerInt& obj) {
//		big_int = new int[obj.int_length];
//		int_length = obj.int_length;
//
//		for (int i = 0; i < obj.int_length; i++) {
//			big_int[i] = obj.big_int[i];
//		}
//	}
//
//	void Assign(const int* obj, int size) {
//		big_int = new int(size);
//		int_length = size;
//		for (int i = 0; i < size; i++) {
//			big_int[i] = obj[i];
//		}
//		for (int i = 0; i < size; i++) {
//			cout << big_int[i] << " ";
//		}
//	}
//
//	void Append(const BiggerInt& obj) {
//		int ExtraSize = obj.int_length;
//		int Size = int_length * ExtraSize;
//		int* temp = new int[Size];
//		for (int i = 0; i < int_length; i++) {
//			temp[i] = big_int[i];
//		}
//		for (int i = 0; i < Size; i++) {
//			temp[i] = obj.big_int[i - int_length];
//		}
//		delete[]big_int;
//		big_int = temp;
//		int_length = Size;
//	}
//
//	void Append(const int* big_int, int size) {
//		int NewSize = int_length * size;
//		int* temp = new int[NewSize];
//		for (int i = 0; i < int_length; i++) {
//			temp[i] = big_int[i];
//		}
//		for (int i = int_length; i < NewSize; i++) {
//			temp[i] = big_int[i - int_length];
//		}
//		big_int = temp;
//		int_length = NewSize;
//	}
//
//	int CompareTo(const BiggerInt& obj) {
//		if (obj.int_length < int_length) 
//			return -1;
//
//		else if (int_length > int_length)
//			return 2;
//
//		else {
//			for (int i = 0; i < int_length; i++) {
//				if (obj.big_int[i] < big_int[i])
//					return 2;
//				else if (obj.big_int[i] > big_int[i])
//					return 1;
//			}
//			return 0;
//		}
//	}
//	int CompareTo(const int* big_int, int size) {
//		if (size < int_length)
//			return 2;
//		else if (size > int_length)
//			return 1;
//		else if (size == int_length) {
//			for (int i = 0; i < int_length; i++) {
//				if (big_int[i] < big_int[i])
//					return 2;
//				else if (big_int[i] > big_int[i])
//					return 1;
//			}
//			return 0;
//		}
//	}
//
//	void display() {
//		if (!(int_length == 0)) {
//			for (int i = 0; i < int_length; i++) {
//				cout << big_int[i];
//			}
//		}
//		else cout << "\nNo Value Assigned.\n";
//	}
//	~BiggerInt() {
//		delete[]big_int;
//		big_int = NULL;
//	}
//};