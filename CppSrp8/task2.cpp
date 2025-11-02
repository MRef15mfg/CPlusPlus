#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int A[SIZE], B[SIZE], C[SIZE];

    cout << "Введіть 5 елементів масиву A:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> A[i];
    }

    cout << "Введіть 5 елементів масиву B:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < SIZE; i++) {
        C[i] = A[i] + B[i];
    }

    cout << "\nМасив C (сума A і B): ";
    for (int i = 0; i < SIZE; i++) {
        cout << C[i] << " ";
    }

    return 0;
}
