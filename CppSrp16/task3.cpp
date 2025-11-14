#include <iostream>
using namespace std;

void shiftLeft(int arr[][4], int rows, int cols, int k)
{
    if (k == 0)
    {
        return;
    }

    for (int i = 0; i < rows; i++)
    {
        int first = arr[i][0];
        for (int j = 0; j < cols - 1; j++)
        {
            arr[i][j] = arr[i][j + 1];
        }
        arr[i][cols - 1] = first;
    }

    shiftLeft(arr, rows, cols, k - 1);
}

int main()
{
    int arr[3][4] = {{4,5,6,7},{1,2,4,1},{4,5,6,9}};
    int k;
    cout << "Введіть кількість зсувів вліво: ";
    cin >> k;

    shiftLeft(arr, 3, 4, k);

    cout << "Масив після зсуву вліво:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
