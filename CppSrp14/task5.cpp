#include <iostream>
using namespace std;

int maxOfTwo(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x, y;
    cout << "Введіть два числа: ";
    cin >> x >> y;

    cout << "Найбільше число: " << maxOfTwo(x, y) << endl;

    return 0;
}
