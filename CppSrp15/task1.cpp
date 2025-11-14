#include <iostream>
using namespace std;

void sortArray(int arr[], int size, bool descending = false)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if ((!descending && arr[j] > arr[j + 1]) ||
                (descending && arr[j] < arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10];
    cout << "Введіть 10 чисел масиву: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    bool desc;
    cout << "Сортувати за спаданням? (1 — так, 0 — ні): ";
    cin >> desc;

    sortArray(arr, 10, desc);

    cout << "Відсортований масив:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
