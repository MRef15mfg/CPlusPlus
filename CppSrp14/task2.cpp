#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    cout << "Введіть число: ";
    cin >> n;

    cout << "Факторіал числа " << n << " = " << factorial(n) << endl;

    return 0;
}
