#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3, COLS = 4;
    int a[ROWS][COLS];
    int n;

    cout << "Введіть число: ";
    cin >> n;

    a[0][0] = n;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i != 0 || j != 0) {
                if (j == 0) {
                    a[i][j] = a[i - 1][COLS - 1] * 2;
                } else {
                    a[i][j] = a[i][j - 1] * 2;
                }
            }
        }
    }

    cout << "\nМасив:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
