#include <iostream>
using namespace std;

void insertionSortHalf(int arr[], int size)
{
    int mid = size / 2;

    for (int i = 1; i < mid; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = mid + 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= mid && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSortHalf(arr, 10);

    cout << "Масив після сортування половин:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
