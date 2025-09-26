#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;

    if (num > 0)
        cout << "Число додатнє" << endl;
    else if (num < 0)
        cout << "Число від’ємне" << endl;
    else
        cout << "Число дорівнює нулю" << endl;

    return 0;
}
