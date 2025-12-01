#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int** transposeMatrix(int** a, int rows, int cols) {
    int** transposed = new int*[cols];
    for (int i = 0; i < cols; ++i)
        transposed[i] = new int[rows];

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            transposed[j][i] = a[i][j];

    return transposed;
}

int main() {
    int rows, cols;
    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Невірні розміри матриці.\n";
        return 0;
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    int** a = new int*[rows];
    for (int i = 0; i < rows; ++i)
        a[i] = new int[cols];

    cout << "Початкова матриця:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    int** transposed = transposeMatrix(a, rows, cols);

    cout << "\nТранспонована матриця:\n";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j)
            cout << transposed[i][j] << " ";
        cout << "\n";
    }

    for (int i = 0; i < rows; ++i)
        delete[] a[i];
    delete[] a;

    for (int i = 0; i < cols; ++i)
        delete[] transposed[i];
    delete[] transposed;

    return 0;
}
