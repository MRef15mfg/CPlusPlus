#include <iostream>
using namespace std;

int rangeSum(int a, int b) {
    int sum = 0;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a + 1; i < b; i++) {
        sum = sum + i;
    }

    return sum;
}

int main() {
    int x, y;

    cout << "Введіть два числа: ";
    cin >> x >> y;

    cout << "Сума чисел між ними: " << rangeSum(x, y) << endl;

    return 0;
}
