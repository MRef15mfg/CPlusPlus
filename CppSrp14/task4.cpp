#include <iostream>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int n;
    cout << "Введіть число: ";
    cin >> n;

    cout << "Куб числа " << n << " = " << cube(n) << endl;

    return 0;
}
