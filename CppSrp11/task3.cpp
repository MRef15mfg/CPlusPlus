#include <iostream>
using namespace std;

void countElements(int arr[], int size, int &pos, int &neg, int &zero)
{
    pos = 0;
    neg = 0;
    zero = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
}

int main()
{
    int n;
    int arr[100];
    int pos, neg, zero;

    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countElements(arr, n, pos, neg, zero);

    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    cout << "Zero: " << zero << endl;

    return 0;
}
