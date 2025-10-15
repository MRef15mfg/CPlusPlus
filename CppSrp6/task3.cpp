#include <iostream>
using namespace std;

int main() {
    int n, size;
    cout << "Введіть розмір дошки і клітинки: ";
    cin >> n >> size;

    for (int i = 0; i < n; i++)
        for (int a = 0; a < size; a++) {
            for (int j = 0; j < n; j++) {
                char ch = ((i + j) % 2 == 0) ? '*' : '-';
                for (int b = 0; b < size; b++) cout << ch;
            }
            cout << '\n';
        }

    return 0;
}
