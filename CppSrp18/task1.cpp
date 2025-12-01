#include <iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;

void addColumn(int** a, int rows, int cols,
               int* newCol, int position,
               int** result)
{
    for (int i = 0; i < rows; ++i) {
        int destCol = 0;

        for (int j = 0; j < position; ++j) {
            result[i][destCol] = a[i][j];
            ++destCol;
        }

        result[i][destCol] = newCol[i];
        ++destCol;

        for (int j = position; j < cols; ++j) {
            result[i][destCol] = a[i][j];
            ++destCol;
        }
    }
}

int main() {
    int rows, cols;

    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Невірні розміри масиву.\n";
        return 0;
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    int** a = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        a[i] = new int[cols];
    }

    cout << "Початковий масив:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }


    int* newCol = new int[rows];
    cout << "\nНовий стовпець:\n";
    for (int i = 0; i < rows; ++i) {
        newCol[i] = rand() % 10;
        cout << newCol[i] << " ";
    }
    cout << "\n";


    int position;
    cout << "\nВведіть позицію для вставки стовпця (від 0 до " << cols << "): ";
    cin >> position;

    if (position < 0 || position > cols) {
        cout << "Невірна позиція.\n";

        for (int i = 0; i < rows; ++i) {
            delete[] a[i];
        }
        delete[] a;
        delete[] newCol;
        return 0;
    }

    int** result = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        result[i] = new int[cols + 1];
    }

    addColumn(a, rows, cols, newCol, position, result);

    cout << "\nМасив після вставки стовпця:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols + 1; ++j) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < rows; ++i) {
        delete[] a[i];
    }
    delete[] a;

    for (int i = 0; i < rows; ++i) {
        delete[] result[i];
    }
    delete[] result;

    delete[] newCol;

    return 0;
}
