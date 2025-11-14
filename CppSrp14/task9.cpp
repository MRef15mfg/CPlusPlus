#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int countPrimes(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (isPrime(arr[i])) count++;
    }
    return count;
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

    int primeCount = countPrimes(arr, n);

    cout << "Кількість простих чисел у масиві: " << primeCount << endl;

    return 0;
}
