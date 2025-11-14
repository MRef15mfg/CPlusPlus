#include <iostream>
using namespace std;

int sumRange(int a, int b)
{
    if (a > b) return 0;
    return a + sumRange(a + 1, b);
}

int main()
{
    int a, b;
    cout << "Введіть a та b: ";
    cin >> a >> b;

    cout << "Сума від " << a << " до " << b << " = " << sumRange(a, b) << endl;

    return 0;
}
