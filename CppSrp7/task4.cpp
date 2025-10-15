#include <iostream>
using namespace std;

int main() {
    const int MONTHS = 12;
    double profit[MONTHS];
    int start, end;

    cout << "Введіть прибуток фірми за 12 місяців:\n";
    for (int i = 0; i < MONTHS; i++) {
        cout << "Місяць " << i + 1 << ": ";
        cin >> profit[i];
    }

    cout << "Введіть діапазон місяців для пошуку (від і до): ";
    cin >> start >> end;

    if (start < 1) start = 1;
    if (end > MONTHS) end = MONTHS;
    if (start > end) {
        cout << "Неправильний діапазон!" << endl;
        return 1;
    }

    double minProfit = profit[start - 1];
    double maxProfit = profit[start - 1];
    int minMonth = start;
    int maxMonth = start;

    for (int i = start - 1; i < end; i++) {
        if (profit[i] < minProfit) {
            minProfit = profit[i];
            minMonth = i + 1;
        }
        if (profit[i] > maxProfit) {
            maxProfit = profit[i];
            maxMonth = i + 1;
        }
    }

    cout << "Мінімальний прибуток у місяці: " << minMonth << " (сума: " << minProfit << ")\n";
    cout << "Максимальний прибуток у місяці: " << maxMonth << " (сума: " << maxProfit << ")\n";

    return 0;
}
