#include <iostream>
using namespace std;

int main() {
    double distAB, distBC;
    int weight;
    cout << "Введіть відстань A-B (км): ";
    cin >> distAB;
    cout << "Введіть відстань B-C (км): ";
    cin >> distBC;
    cout << "Введіть вагу вантажу (кг): ";
    cin >> weight;

    double consumption;

    if (weight <= 500)
        consumption = 1;
    else if (weight <= 1000)
        consumption = 4;
    else if (weight <= 1500)
        consumption = 7;
    else if (weight <= 2000)
        consumption = 9;
    else {
        cout << "Літак не може підняти вантаж більше 2000 кг!" << endl;
        return 0;
    }

    double fuelAB = distAB * consumption;
    double fuelBC = distBC * consumption;

    if (fuelAB > 300) {
        cout << "Неможливо долетіти з A до B!" << endl;
        return 0;
    }
    if (fuelBC > 300) {
        cout << "Неможливо долетіти з B до C!" << endl;
        return 0;
    }

    cout << "Мінімальна кількість палива для дозаправки в B: " << fuelBC << " літрів" << endl;

    return 0;
}
