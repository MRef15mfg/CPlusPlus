#include <iostream>
using namespace std;

int main() {
    double a, b;  

    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;

    double suma = a + b;
    double dob = a * b;
    double serednie = (a + b) / 2.0;

    cout << "Сума: " << suma << endl;
    cout << "Добуток: " << dob << endl;
    cout << "Середнє арифметичне: " << serednie << endl;

    return 0;
}
