#include <iostream>
using namespace std;

int main() {
    int num, maxNum;
    cout << "Введіть 7 цілих чисел:" << endl;

    cin >> maxNum;
    for (int i = 1; i < 7; i++) {
        cin >> num;
        if (num > maxNum)
        {
            maxNum = num;
        }
    }

    cout << "Найбільше число: " << maxNum << endl;
    return 0;
}
