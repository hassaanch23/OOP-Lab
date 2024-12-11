//#include<iostream>
//using namespace std;
//
//template<class T>
//class Pair {
//	T values[2];
//	static int Count;
//public:
//	Pair(T x = 0, T y = 0) {
//		values[0] = x; values[1] = y;
//		Count++;
//	};
//
//	T GetMax() {
//		if (values[0] >= values[1]) {
//			return values[0];
//		}
//		else
//			return values[1];
//	}
//	T GetMin();
//
//	static T getCount() {
//		return Count;
//	}
//
//	void setCount(T x) {
//		Count = x;
//	}
//};
//
//template<class T>
//T Pair<T>::GetMin() {
//	if (values[0] <= values[1]) {
//		return values[0];
//	}
//	else return values[1];
//}
//template<class T>
//int Pair<T>::Count = 0;
//
//int main() {
//	Pair<double> myobject1(1.012, 1.01234);
//	Pair<double> myobject2(2.012, 2.01234);
//	Pair<double> myobject3(3.012, 3.01234);
//
//	Pair<int> myobject4(1, 1);
//	Pair<int> myobject5(2, 4);
//
//	cout << "Count of integer objects: " << Pair<int>::getCount() << endl;
//	cout << "Count of double objects: " <<Pair<double>::getCount() << endl;
//
//	return 0;
//}