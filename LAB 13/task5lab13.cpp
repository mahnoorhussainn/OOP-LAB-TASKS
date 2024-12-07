#include <iostream>
using namespace std;

template <class T>
class Matrix {
    int rowCount, colCount;
    T *matrix;

public:
    Matrix(int r, int c) {
        rowCount = r;
        colCount = c;
        matrix = new T[rowCount * colCount];
    }

    ~Matrix() {
        delete[] matrix;
    }

    void setElement(int i, int j, T value) {
        matrix[i * colCount + j] = value;
    }

    T getElement(int i, int j) const {
        return matrix[i * colCount + j];
    }

    void display() const {
        for (int i = 0; i < rowCount; i++) {
            for (int j = 0; j < colCount; j++) {
                cout << getElement(i, j) << " ";
            }
            cout << endl;
        }
    }

    Matrix<T> add(const Matrix<T> &m) const {
        Matrix<T> result(rowCount, colCount);
        for (int i = 0; i < rowCount; i++) {
            for (int j = 0; j < colCount; j++) {
                T sum = this->getElement(i, j) + m.getElement(i, j);
                result.setElement(i, j, sum);
            }
        }
        return result;
    }

    Matrix<T> multiply(const Matrix<T> &m) const {
        Matrix<T> result(rowCount, m.colCount);
        for (int i = 0; i < rowCount; i++) {
            for (int j = 0; j < m.colCount; j++) {
                T sum = 0;
                for (int k = 0; k < colCount; k++) {
                    sum += this->getElement(i, k) * m.getElement(k, j);
                }
                result.setElement(i, j, sum);
            }
        }
        return result;
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    Matrix<int> mat1(2, 2);
    cout << "Enter elements for Integer Matrix 1 (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int value;
            cout << "Enter value for mat1[" << i << "][" << j << "]: ";
            cin >> value;
            mat1.setElement(i, j, value);
        }
    }

    Matrix<int> mat2(2, 2);
    cout << "Enter elements for Integer Matrix 2 (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int value;
            cout << "Enter value for mat2[" << i << "][" << j << "]: ";
            cin >> value;
            mat2.setElement(i, j, value);
        }
    }

    cout << "Integer Matrix 1:" << endl;
    mat1.display();

    cout << "Integer Matrix 2:" << endl;
    mat2.display();

    Matrix<int> sum = mat1.add(mat2);
    cout << "Sum of Integer Matrices:" << endl;
    sum.display();

    Matrix<int> product = mat1.multiply(mat2);
    cout << "Product of Integer Matrices:" << endl;
    product.display();

    Matrix<double> mat3(2, 2);
    cout << "Enter elements for Double Matrix 1 (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            double value;
            cout << "Enter value for mat3[" << i << "][" << j << "]: ";
            cin >> value;
            mat3.setElement(i, j, value);
        }
    }

    Matrix<double> mat4(2, 2);
    cout << "Enter elements for Double Matrix 2 (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            double value;
            cout << "Enter value for mat4[" << i << "][" << j << "]: ";
            cin >> value;
            mat4.setElement(i, j, value);
        }
    }

    cout << "Double Matrix 1:" << endl;
    mat3.display();

    cout << "Double Matrix 2:" << endl;
    mat4.display();

    Matrix<double> sumD = mat3.add(mat4);
    cout << "Sum of Double Matrices:" << endl;
    sumD.display();

    Matrix<double> productD = mat3.multiply(mat4);
    cout << "Product of Double Matrices:" << endl;
    productD.display();

}

