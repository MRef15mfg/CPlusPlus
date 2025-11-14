#include <iostream>
using namespace std;

double average(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    double result = (double)sum / size;
    return result;
}

int main()
{
    int n;
    int arr[100];

    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Average = " << average(arr, n);

    return 0;
}
