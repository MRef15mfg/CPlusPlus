#include <iostream>
using namespace std;

bool isLucky(int number) {
    if (number < 100000 || number > 999999) {
        cout << "Це не шестизначне число!" << endl;
        return false;
    }

    int a1 = number / 100000;
    int a2 = (number / 10000) % 10;
    int a3 = (number / 1000) % 10;
    int a4 = (number / 100) % 10;
    int a5 = (number / 10) % 10;
    int a6 = number % 10;

    int sum1 = a1 + a2 + a3;
    int sum2 = a4 + a5 + a6;

    if (sum1 == sum2) {
        return true;
    } 
    else {
        return false;
    }
}

int main() {
    int num;

    cout << "Введіть шестизначне число: ";
    cin >> num;

    if (isLucky(num)) {
        cout << "Це щасливе число!" << endl;
    } 
    else {
        cout << "Це не щасливе число!" << endl;
    }

    return 0;
}
