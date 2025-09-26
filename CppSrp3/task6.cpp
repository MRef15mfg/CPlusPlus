#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Результат: " << num * 3 << endl;
    else
        cout << "Результат: " << num / 2.0 << endl;

    return 0;
}
