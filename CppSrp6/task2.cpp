#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Введіть число: ";
    cin >> n;
    int digits = 0, sum = 0, zeros = 0;

    if (n == 0) { digits = 1; zeros = 1; }

    while (n > 0) {
        int d = n % 10;
        sum += d;
        if (d == 0) zeros++;
        digits++;
        n /= 10;
    }

    double avg = (double)sum / digits;

    cout << "\nКількість цифр: " << digits;
    cout << "\nСума цифр: " << sum;
    cout << "\nСереднє арифметичне: " << avg;
    cout << "\nКількість нулів: " << zeros << endl;

    return 0;
}
