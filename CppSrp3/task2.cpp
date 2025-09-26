#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;

    if (a < b)
        cout << "Менше число: " << a << endl;
    else
        cout << "Менше число: " << b << endl;

    return 0;
}
