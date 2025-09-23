#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;
    cout << "Введіть третє число: ";
    cin >> c;

    double suma = a + b + c;
    double dob = a * b * c;
    double serednie = (a + b + c) / 3.0;

    cout << "Сума: " << suma << endl;
    cout << "Добуток: " << dob << endl;
    cout << "Середнє арифметичне: " << serednie << endl;

    return 0;
}
