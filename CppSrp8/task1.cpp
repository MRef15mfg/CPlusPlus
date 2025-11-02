#include <iostream>
using namespace std;

int main() {
    const int SIZE1 = 10;
    const int SIZE2 = 5;
    int A[SIZE1], B[SIZE2], C[SIZE2];

    cout << "Введіть 10 елементів масиву A:\n";
    for (int i = 0; i < SIZE1; i++) {
        cin >> A[i];
    }

    // Копіювання перших 5 елементів у масив B
    for (int i = 0; i < SIZE2; i++) {
        B[i] = A[i];
    }

    // Копіювання наступних 5 елементів у масив C
    for (int i = 0; i < SIZE2; i++) {
        C[i] = A[i + SIZE2];
    }

    // Виведення результатів
    cout << "\nМасив B: ";
    for (int i = 0; i < SIZE2; i++) cout << B[i] << " ";

    cout << "\nМасив C: ";
    for (int i = 0; i < SIZE2; i++) cout << C[i] << " ";

    return 0;
}
