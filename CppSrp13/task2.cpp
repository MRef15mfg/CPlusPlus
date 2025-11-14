#include <iostream>
using namespace std;

int main()
{
    int arr1[5], arr2[5], result[10];
    cout << "Введіть перший масив (5 елементів): ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }

    cout << "Введіть другий масив (5 елементів): ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }

    int pos = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] > 0) result[pos++] = arr1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr2[i] > 0) result[pos++] = arr2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] == 0) result[pos++] = arr1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr2[i] == 0) result[pos++] = arr2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] < 0) result[pos++] = arr1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr2[i] < 0) result[pos++] = arr2[i];
    }

    cout << "Результуючий масив:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
