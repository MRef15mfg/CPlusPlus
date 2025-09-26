#include <iostream>
using namespace std;

int main() {
    int grade;
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Введіть оцінку " << i << ": ";
        cin >> grade;
        sum += grade;
    }

    double average = sum / 5.0;

    if (average >= 4)
        cout << "Студент допущений до іспиту" << endl;
    else
        cout << "Студент не допущений" << endl;

    return 0;
}
