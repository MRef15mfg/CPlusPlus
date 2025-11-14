#include <iostream>
using namespace std;

void printRectangle(int N, int K)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int height, width;
    cout << "Введіть висоту прямокутника: ";
    cin >> height;
    cout << "Введіть ширину прямокутника: ";
    cin >> width;

    printRectangle(height, width);

    return 0;
}
