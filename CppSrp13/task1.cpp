#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    int arr[100];

    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }

    for (int i = pos; i < n; i++)
    {
        arr[i] = -1;
    }

    cout << "Стиснутий масив:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
