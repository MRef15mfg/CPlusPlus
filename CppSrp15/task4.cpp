#include <iostream>
using namespace std;

int power(int base, int exp)
{
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main()
{
    int x, n;
    cout << "Введіть число та степінь: ";
    cin >> x >> n;

    cout << x << "^" << n << " = " << power(x, n) << endl;

    return 0;
}
