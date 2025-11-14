#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[100], arr2[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int *p1 = arr1 + n - 1;
    int *p2 = arr2;

    for (int i = 0; i < n; i++)
    {
        *p2 = *p1;
        p1--;
        p2++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
