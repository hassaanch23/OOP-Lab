//#include <iostream>
//using namespace std;
//int main()
//{
//	int M, N;
//	cout << "Rows of Matrix: ";
//	cin >> M;
//	cout << "Columns of Matrix: ";
//	cin >> N;
//
//	int** Matrix = new int*[M];
//
//	for (int i = 0; i < M; i++) {
//		Matrix[i] = new int[N];
//	}
//	cout << "\t\tEnter Values for Matrix " << endl;
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << "Index " << i << j << ": ";
//			cin >> Matrix[i][j];
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < M; i++) {
//		int sum = 0;
//		for (int j = 0; j < N; j++) {
//			cout << Matrix[i][j] << "\t ";
//			sum = sum + Matrix[i][j];
//		}
//		cout << sum;
//		cout << endl;
//	}
//	for (int i = 0; i < N; i++) {
//		int sum1 = 0;
//		for (int j = 0; j < M; j++) {
//			sum1 = sum1 + Matrix[j][i];
//		}
//		cout << sum1 << "\t ";
//	}
//	int sum2 = 0;
//	if (M == N) {
//		for (int z = 0; z < M; z++) {
//			sum2 = sum2 + Matrix[z][z];
//		}
//		cout << sum2;
//	}
//	for (int i = 0; i < M; i++)
//	{
//		delete[] Matrix[i];
//	}
//	delete[] Matrix;
//}