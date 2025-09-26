#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;

    cout << "Оберіть дію (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Результат: " << a + b << endl;
            break;
        case '-':
            cout << "Результат: " << a - b << endl;
            break;
        case '*':
            cout << "Результат: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Результат: " << a / b << endl;
            else
                cout << "Помилка: ділення на нуль!" << endl;
            break;
        default:
            cout << "Невідома операція" << endl;
    }

    return 0;
}
