#include <iostream>
using namespace std;

void printStars(int n)
{
    if (n == 0) return;
    cout << "*";
    printStars(n - 1);
}

int main()
{
    int N;
    cout << "Введіть кількість зірок: ";
    cin >> N;

    printStars(N);
    cout << endl;

    return 0;
}
