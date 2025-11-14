#include <iostream>
#include <cstdlib>
using namespace std;

void init(int a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 50;
        }
    }
}

void init(double a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = (rand() % 100) / 10.0;
        }
    }
}

void init(char a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 'A' + rand() % 26;
        }
    }
}

void print(int a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void print(double a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void print(char a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int maxDiag(int a[][10], int n)
{
    int m = a[0][0];

    for (int i = 1; i < n; i++)
    {
        if (a[i][i] > m)
        {
            m = a[i][i];
        }
    }

    return m;
}

int minDiag(int a[][10], int n)
{
    int m = a[0][0];

    for (int i = 1; i < n; i++)
    {
        if (a[i][i] < m)
        {
            m = a[i][i];
        }
    }

    return m;
}

void sortRows(int a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = 0; k < n - 1; k++)
            {
                if (a[i][k] > a[i][k + 1])
                {
                    int t = a[i][k];
                    a[i][k] = a[i][k + 1];
                    a[i][k + 1] = t;
                }
            }
        }
    }
}

int main()
{
    int n;
    int a[10][10];

    cout << "Enter matrix size: ";
    cin >> n;

    init(a, n);
    print(a, n);

    cout << "Max diag = " << maxDiag(a, n) << endl;
    cout << "Min diag = " << minDiag(a, n) << endl;

    sortRows(a, n);

    cout << "Sorted:\n";
    print(a, n);

    return 0;
}
