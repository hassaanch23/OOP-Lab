//#include <iostream>
//using namespace std;
//int main() {
//
//	int M, N;
//	cout << "Size of Array 1: ";
//	cin >> M;
//	cout << "Size of Array 2: ";
//	cin >> N;
//
//	int* A = new int[M], * B = new int[N], * C = new int[M + N];
//	cout << "\t\tFor Array 1" << endl;
//	for (int i = 0; i < M; i++) {
//		cout << "Index " << i << ": ";
//		cin >> A[i];
//	}
//	cout << "\n\t\tFor Array 2" << endl;
//	for (int i = 0; i < N; i++) {
//		cout << "Index " << i << ": ";
//		cin >> B[i];
//	}
//	int temp = 0, Max = M + N, temp1 = 1;
//	for (int i = 0; i < M; i++) {
//		if (A[i] % 2 == 0) {
//			C[temp] = A[i];
//			temp++;
//		}
//		else {
//			C[Max-temp1] = A[i];
//			temp1++;
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		if (B[i] % 2 == 0) {
//			C[temp] = B[i];
//			temp++;
//		}
//		else {
//			C[Max-temp1] = B[i];
//			temp1++;
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < Max; i++) {
//		cout << C[i] << " ";
//	}
//	for (int i = 0; i < Max; i++)
//	{
//		delete[] A;
//		delete[]B;
//		delete[]C;
//	}
//}