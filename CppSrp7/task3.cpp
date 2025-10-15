#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int N = 10;
    int arr[N];

    srand(time(0));

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 101 - 50;
    }

    cout << "Масив: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int minElement = arr[0];
    int maxElement = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] < minElement)
            minElement = arr[i];
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }

    cout << "Мінімальний елемент: " << minElement << endl;
    cout << "Максимальний елемент: " << maxElement << endl;

    return 0;
}
