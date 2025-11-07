#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    int arr[100];
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Введіть ключ для пошуку: ";
    cin >> key;

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        cout << "Елемент знайдено під індексом: " << result << endl;
    } 
    else {
        cout << "Елемент не знайдено!" << endl;
    }

    return 0;
}
