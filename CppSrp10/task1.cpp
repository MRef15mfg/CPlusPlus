#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1;

    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result = result * base;
        }
    } 
    else {
        for (int i = 0; i < -exponent; i++) {
            result = result * base;
        }
        result = 1 / result;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    cout << "Введіть основу і показник степеня: ";
    cin >> base >> exponent;

    cout << "Результат: " << power(base, exponent) << endl;

    return 0;
}
