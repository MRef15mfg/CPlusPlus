#include <iostream>
using namespace std;

int max(int arr[], int size)
{
    int m = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > m) m = arr[i];
    }
    return m;
}

int max(int arr[][10], int rows, int cols)
{
    int m = arr[0][0];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (arr[i][j] > m) m = arr[i][j];
    return m;
}

int max(int arr[][10][10], int x, int y, int z)
{
    int m = arr[0][0][0];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            for (int k = 0; k < z; k++)
                if (arr[i][j][k] > m) m = arr[i][j][k];
    return m;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int max(int a, int b, int c)
{
    return max(max(a, b), c);
}

int main()
{
    int arr1D[5] = {1, 5, 2, 9, 3};
    int arr2D[2][10] = {{1,2,3,4,5,6,7,8,9,10},{-1,-2,-3,-4,-5,-6,-7,-8,-9,-10}};
    int arr3D[2][10][10] = {{{0}}};
    
    cout << "Max 1D: " << max(arr1D,5) << endl;
    cout << "Max 2D: " << max(arr2D,2,10) << endl;
    cout << "Max 3D: " << max(arr3D,2,10,10) << endl;
    cout << "Max 2 чисел: " << max(5,9) << endl;
    cout << "Max 3 чисел: " << max(5,9,2) << endl;

    return 0;
}
