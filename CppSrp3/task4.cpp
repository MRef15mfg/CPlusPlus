#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;

    if (a == b)
        cout << "Числа рівні" << endl;
    else {
        if (a < b)
            cout << a << " " << b << endl;
        else
            cout << b << " " << a << endl;
    }

    return 0;
}
