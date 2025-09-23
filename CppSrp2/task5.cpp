#include <iostream>
using namespace std;

int main() {
    double price, discount;
    int quantity;

    cout << "Введіть вартість одного ноутбука: ";
    cin >> price;
    cout << "Введіть кількість ноутбуків: ";
    cin >> quantity;
    cout << "Введіть відсоток знижки: ";
    cin >> discount;

    double total = price * quantity;
    double finalPrice = total - (total * discount / 100.0);

    cout << "Загальна сума замовлення зі знижкою: " << finalPrice << " грн" << endl;

    return 0;
}
