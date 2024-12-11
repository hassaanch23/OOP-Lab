//#include <iostream>
//#include <cmath> 
//using namespace std;
//
//
//void Expand(int*& p, int& size) {
//	int* temparr = new int[size];
//	for (int i = 0; i < size; i++) {
//		*(temparr + i) = *(p + i);
//	}
//	delete[]p;
//	p = new int[size + 1];
//	for (int i = 0; i < size; i++) {
//		*(p + i) = *(temparr + i);
//	}
//	size++;
//	*(p + size - 1) = 0;
//	delete[]temparr;
//	temparr = nullptr;
//}
//
//int decimal_value(int n) {
//	int temp = 10;
//	int sum = 0, p = 0;
//	while (temp <= 100000) {
//		if (n % temp == 1) {
//			sum += pow(2, p);
//			cout << sum;
//		}
//		temp *= 10;
//		p++;
//	}
//	return sum;
//}
//
//int main() {
//	int size1 = 1;
//	int size2 = 1;
//	int* array1 = new int[1];
//	int* array2 = new int[1];
//	int ptr1 = 0;
//	int ptr2 = 0;
//	int x = 0;
//	while (x != -1) {
//		cout << ptr1 + 1 << " Element of Array 1: ";
//		cin >> x;
//		if (x == -1)
//			break;
//		while (x < 4 || x > 32) {
//			cout << "Enter value between 4 and 32! ";
//			cin >> x;
//			if (x == -1)
//				break;
//		}
//		if (x == -1)
//			break;
//		array1[ptr1++] = x;
//		if (ptr1 >= size1) {
//			Expand(array1, size1);
//		}
//		cout << ptr2 + 1 << " Element of Array2: ";
//		cin >> x;
//		if (x == -1)
//			break;
//
//		while (x / 100000 > 1) {
//			cout << "Enter a binary value equivalent of values between 4 and 32! ";
//			cin >> x;
//			if (x == -1)
//				break;
//		}
//		if (x == -1)
//			break;
//		array2[ptr2++] = x;
//		if (ptr2 >= size2) {
//			Expand(array2, size2);
//		}
//	}
//	int count = 0;
//	for (int i = 0; i < size2; i++) {
//		x = decimal_value(*(array2 + i));
//		if (x == *(array1 + i)) {
//			count++;
//			if (count == size1 || count == size2 - 1) {
//				cout << "Both arrays have the same binary value!";
//				break;
//			}
//		}
//		else {
//			cout << "both arrays are not the same!";
//			break;
//		}
//	}
//}
