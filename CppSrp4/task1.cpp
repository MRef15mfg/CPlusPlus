#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введіть шестизначне число: ";
    cin >> num;

    if (num < 100000 || num > 999999) {
        cout << "Помилка: потрібно ввести шестизначне число!" << endl;
    } else {
        int d1 = num / 100000;
        int d2 = (num / 10000) % 10;
        int d3 = (num / 1000) % 10;
        int d4 = (num / 100) % 10;
        int d5 = (num / 10) % 10;
        int d6 = num % 10;

        int sum1 = d1 + d2 + d3;
        int sum2 = d4 + d5 + d6;

        if (sum1 == sum2)
            cout << "Число щасливе!" << endl;
        else
            cout << "Число не щасливе." << endl;
    }

    return 0;
}
