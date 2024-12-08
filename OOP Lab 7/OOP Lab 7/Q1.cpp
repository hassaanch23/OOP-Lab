//#include<iostream>
//using namespace std;
//
//class RationalNumber {
//	int num, den;
//public:
//	RationalNumber() {
//		num = 1; den = 1;
//	}
//	RationalNumber(int n, int d) {
//		num = n;
//		if (d == 0) {
//			cout << "Denominator can't be zero !";
//			den = 1;
//		}
//		else {
//			int sign = 1;
//			if (n < 0) {
//				sign = -sign;  n = -n;
//			}
//			else if (d < 0) {
//				sign = -sign;  d = -d;
//			}
//			int a = n;
//			int b = d;
//			while (b != 0) {
//				int remainder = a % b;
//				a = b; b = remainder;
//			}
//			num = sign * n / a;
//			den = d / a;
//		}
//
//	}
//	friend istream& operator >> (istream&, RationalNumber&);
//	friend ostream& operator << (ostream&, const RationalNumber&);
//
//	RationalNumber operator +(RationalNumber &n) {
//		int n1, d1;
//		n1 = (num * n.den) + (den * n.num);
//		d1 = (den * n.den);
//		return RationalNumber(n1 ,d1);
//	}
//	RationalNumber operator -(RationalNumber& n) {
//		int n1, d1;
//		n1 = (num * n.den) - (den * n.num);
//		d1 = (den * n.den);
//		return RationalNumber(n1, d1);
//	}
//	RationalNumber operator *(RationalNumber& n) {
//		int n1, d1;
//		n1 = num * n.num;
//		d1 = den * n.den;
//		return RationalNumber(n1, d1);
//	}
//	bool operator ==(RationalNumber& n) {
//		if (num == n.num && den == n.den) return true;
//		else return false;
//	}
//	RationalNumber operator ++(int) {
//		RationalNumber temp;
//		temp.num=num;
//		temp.den=den;
//		num++;
//		den++;
//		return temp;
//	}
//	RationalNumber operator ++() {
//		num++;
//		den++;
//	}
//	RationalNumber operator --(int) {
//		RationalNumber temp;
//		temp.num = num;
//		temp.den = den;
//		num--;
//		den--;
//		return temp;
//	}
//	RationalNumber operator --() {
//		num--;
//		den++;
//	}
//};
//istream& operator >> (istream& input, RationalNumber& R) {
//	cout << "Enter value of numenator: "; input >> R.num;
//	cout << "Enter value of denominator: "; input >> R.den;
//	return input;
//}
//ostream& operator << (ostream& out, const RationalNumber& R) {
//	out << R.num << "/" << R.den;
//	return out;
//}
//
//
//int main()
//{
//	RationalNumber RN1;
//	RationalNumber RN2(5, 6);
//	RationalNumber RN3;
//
//	cout << "Input a rational number " << endl;
//	cin >> RN3;
//
//	cout << RN1 << RN2 << RN3;
//
//	if (RN2 == RN3)
//		cout << "RN2 == RN3" << endl;
//	else
//		cout << "RN2 != RN3" << endl;
//
//	RationalNumber RN4 = RN2 - RN3;
//	cout << RN4;
//
//	RationalNumber RN5 = RN2 + RN3;
//	cout << RN5;
//
//	RN4++;
//	cout << RN4;
//
//	RN5--;
//	cout << RN5;
//
//	system("pause");
//	return 0;
//}