#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int &minVal, int &minIndex, int &maxVal, int &maxIndex)
{
    minVal = maxVal = arr[0];
    minIndex = maxIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxIndex = i;
        }
    }
}

int main()
{
    int arr[100], n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minVal, minIndex, maxVal, maxIndex;
    findMinMax(arr, n, minVal, minIndex, maxVal, maxIndex);

    cout << "Мінімум: " << minVal << " (індекс " << minIndex << ")\n";
    cout << "Максимум: " << maxVal << " (індекс " << maxIndex << ")\n";

    return 0;
}
