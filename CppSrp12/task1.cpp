#include <iostream>
using namespace std;

int main()
{
    int a, b, num;

    cout << "Введіть початок діапазону: ";
    cin >> a;

    cout << "Введіть кінець діапазону: ";
    cin >> b;

    do
    {
        cout << "Введіть число від " << a << " до " << b << ": ";
        cin >> num;
    }
    while (num < a || num > b);

    cout << "Число введено правильно!" << endl;

    return 0;
}
