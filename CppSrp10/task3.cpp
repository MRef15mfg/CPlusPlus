#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n) {
        return true;
    } 
    else {
        return false;
    }
}

void findPerfectNumbers(int start, int end) {
    cout << "Досконалі числа у цьому діапазоні: ";

    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    int a, b;

    cout << "Введіть межі інтервалу: ";
    cin >> a >> b;

    findPerfectNumbers(a, b);

    return 0;
}
