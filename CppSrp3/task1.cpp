#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Число парне" << endl;
    else
        cout << "Число непарне" << endl;

    return 0;
}
