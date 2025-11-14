#include <iostream>
#include <cstdlib>
using namespace std;

int minSumPos(int arr[], int start, int end, int &minPos)
{
    if (start > end - 10)
    {
        minPos = end - 10;
        return 0;
    }

    int sum = 0;
    for (int i = start; i < start + 10; i++)
    {
        sum += arr[i];
    }

    int nextPos;
    int nextSum = minSumPos(arr, start + 1, end, nextPos);

    if (start + 10 <= end && (sum < nextSum || start == 0))
    {
        minPos = start;
        return sum;
    }
    else
    {
        minPos = nextPos;
        return nextSum;
    }
}

int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 100;
    }

    int pos;
    minSumPos(arr, 0, 100, pos);

    cout << "Початкова позиція 10 чисел з мінімальною сумою: " << pos << endl;

    return 0;
}
