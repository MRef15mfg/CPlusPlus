#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            return mid;
        } 
        else if (arr[mid] < key) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int size;
    cout << "Введіть розмір відсортованого масиву: ";
    cin >> size;

    int arr[100];
    cout << "Введіть елементи масиву у порядку зростання: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Введіть ключ для пошуку: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        cout << "Елемент знайдено під індексом: " << result << endl;
    } 
    else {
        cout << "Елемент не знайдено!" << endl;
    }

    return 0;
}
