#include <iostream>
using namespace std;

int main() {
    double amount, result;
    int choice;

    cout << "===== КОНВЕРТЕР ВАЛЮТ =====" << endl;
    cout << "1. USD -> UAH" << endl;
    cout << "2. EUR -> UAH" << endl;
    cout << "3. UAH -> USD" << endl;
    cout << "4. Вихід" << endl;

    cout << "Оберіть пункт меню: ";
    cin >> choice;

    if (choice == 4) {
        cout << "Вихід з програми." << endl;
        return 0;
    }

    cout << "Введіть суму: ";
    cin >> amount;

    if (choice == 1) {
        result = amount * 42;
        cout << amount << " USD = " << result << " UAH" << endl;
    } 
    else if (choice == 2) {
        result = amount * 45;
        cout << amount << " EUR = " << result << " UAH" << endl;
    } 
    else if (choice == 3) {
        result = amount / 42;
        cout << amount << " UAH = " << result << " USD" << endl;
    } 
    else {
        cout << "Невірний вибір!" << endl;
    }

    return 0;
}
