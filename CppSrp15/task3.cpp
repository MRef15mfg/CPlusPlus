#include <iostream>
using namespace std;

void sortBetweenNegatives(int arr[], int size)
{
    int firstNeg = -1, lastNeg = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (firstNeg == -1) firstNeg = i;
            lastNeg = i;
        }
    }

    if (firstNeg == -1 || lastNeg == -1 || firstNeg == lastNeg) return;

    for (int i = firstNeg + 1; i < lastNeg; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= firstNeg + 1 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[20];
    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;
    cout << "Введіть елементи (-20..20): ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sortBetweenNegatives(arr, size);

    cout << "Масив після впорядкування між крайніми від'ємними:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
