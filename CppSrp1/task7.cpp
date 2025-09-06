#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double radius, volume;
    const double PI = 3.141592653589793;

    cout << "Обчислення об’єму кулі.\n";
    cout << "Введіть радіус (см) -> ";
    cin >> radius;

    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << fixed << setprecision(2);
    cout << "Об’єм: " << volume << " куб. см." << endl;

    return 0;
}
