//#include <iostream>
//using namespace std;
//
//class Matrix {
//public:
//    Matrix(int** matrix = nullptr, int rows = 0, int size = 0) : matrix(matrix), rows(rows), size(size) {}
//
//    Matrix(const Matrix& other) {
//        rows = other.rows;
//        size = other.size;
//
//        matrix = new int* [rows];
//        for (int i = 0; i < rows; i++) {
//            matrix[i] = new int[size];
//            for (int j = 0; j < size; j++) {
//                matrix[i][j] = other.matrix[i][j];
//            }
//        }
//    }
//
//    int** GetMatrix() {
//        return matrix;
//    }
//
//    int GetSize() {
//        return size;
//    }
//
//    int GetRows() {
//        return rows;
//    }
//
//    void SetRows()
//    {
//        cout << "Enter Rows : ";
//        cin >> rows;
//    }
//
//    void SetSize()
//    {
//        cout << "\nEnter Columns : ";
//        cin >> size;
//
//    }
//
//    void SetMatrix(int** m) {
//        matrix = m;
//    }
//
//    void InputMatrix() {
//        cout << "Enter matrix values:" << endl;
//        matrix = new int* [rows];
//        for (int i = 0; i < rows; i++) {
//            matrix[i] = new int[size];
//            for (int j = 0; j < size; j++) {
//                cin >> matrix[i][j];
//            }
//        }
//    }
//
//    void OutputMatrix() {
//        cout << "Matrix:" << endl;
//        for (int i = 0; i < rows; i++) {
//            for (int j = 0; j < size; j++) {
//                cout << matrix[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//
//    int** AddMatrix(Matrix& matrix2) {
//        if (rows != matrix2.rows || size != matrix2.size) {
//            return nullptr;
//        }
//
//        int** R = new int* [rows];
//        for (int i = 0; i < rows; i++) {
//            R[i] = new int[size];
//            for (int j = 0; j < size; j++) {
//                R[i][j] = matrix[i][j] + matrix2.matrix[i][j];
//            }
//        }
//
//        return R;
//    }
//
//    ~Matrix() {
//        for (int i = 0; i < rows; i++) {
//            delete[] matrix[i];
//        }
//        delete[] matrix;
//    }
//
//private:
//    int** matrix;
//    int rows;
//    int size;
//};
//
//int main() {
//    Matrix matrix1;
//    matrix1.SetRows();
//    matrix1.SetSize();
//    matrix1.InputMatrix();
//
//    Matrix matrix2(matrix1);
//
//    int** result = matrix1.AddMatrix(matrix2);
//    if (result != nullptr) {
//        Matrix matrixR(result, matrix1.GetRows(), matrix1.GetSize());
//        matrixR.OutputMatrix();
//    }
//    else {
//        cout << "Error: matrices have different dimensions" << std::endl;
//    }
//
//    return 0;
//}
