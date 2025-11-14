#include <iostream>
using namespace std;

bool isPositive(int n)
{
    return n > 0;
}

int main()
{
    int n;
    cout << "Введіть число: ";
    cin >> n;

    if (isPositive(n))
        cout << "Число додатне" << endl;
    else
        cout << "Число від'ємне або нуль" << endl;

    return 0;
}
