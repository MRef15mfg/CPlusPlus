#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key)
{
    if (left > right)
    {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return binarySearch(arr, left, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, right, key);
    }
}

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int key;
    cout << "Введіть шукане число: ";
    cin >> key;

    int pos = binarySearch(arr, 0, 9, key);

    if (pos != -1)
    {
        cout << "Число знайдено на позиції " << pos << endl;
    }
    else
    {
        cout << "Число не знайдено" << endl;
    }

    return 0;
}
