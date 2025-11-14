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

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double avg = sum / n;

    int limit;
    if (avg > 0) limit = (2 * n) / 3;
    else limit = n / 3;

    for (int i = 0; i < limit - 1; i++)
    {
        for (int j = 0; j < limit - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = n - 1, j = limit; j < i; i--, j++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    cout << "Масив після сортування:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
