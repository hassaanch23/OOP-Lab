//#include<iostream>
//using namespace std;
//
//template<class T>
//class Pair{
//	T values[2];
//public:
//	Pair(T x=0, T y=0) {
//		values[0] = x; values[1] = y;
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
//};
//
//template<class T>
//T Pair<T>::GetMin() {
//	if (values[0] <= values[1]) {
//		return values[0];
//	}
//	else return values[1];
//}
//
//
//int main() {
//	Pair<double> myobject(1.012, 1.01234);
//	cout << myobject.GetMax();
//	return 0;
//}