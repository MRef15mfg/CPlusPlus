#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double length, width, height, volume;

    cout << "Обчислення об’єму паралелепіпеда.\n";
    cout << "Введіть вихідні дані:\n";

    cout << "Довжина (см) -> ";
    cin >> length;

    cout << "Ширина (см) -> ";
    cin >> width;

    cout << "Висота (см) -> ";
    cin >> height;

    volume = length * width * height;

    cout << fixed << setprecision(2);
    cout << "Об’єм: " << volume << " куб. см." << endl;

    return 0;
}
