#include <iostream>
using namespace std;

int main() {
    double sales;  

    cout << "Введіть суму угод менеджера за місяць ($): ";
    cin >> sales;

    double baseSalary = 100;
    double bonus = sales * 0.05;
    double totalSalary = baseSalary + bonus;

    cout << "Підсумкова зарплата менеджера: " << totalSalary << " $" << endl;

    return 0;
}
