#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введіть чотиризначне число: ";
    cin >> num;

    if (num < 1000 || num > 9999) {
        cout << "Помилка: потрібно ввести чотиризначне число!" << endl;
    } else {
        int d1 = num / 1000;
        int d2 = (num / 100) % 10;
        int d3 = (num / 10) % 10;
        int d4 = num % 10;

        int newNum = d2 * 1000 + d1 * 100 + d4 * 10 + d3;
        cout << "Нове число: " << newNum << endl;
    }

    return 0;
}
