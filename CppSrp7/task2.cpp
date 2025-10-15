#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int userTotal = 0, compTotal = 0;

    cout << "=== ГРА 'КУБИКИ' ===\n\n";

    for (int round = 1; round <= 3; round++) {
        cout << "--- Раунд " << round << " ---\n";

        int user1 = rand() % 6 + 1;
        int user2 = rand() % 6 + 1;
        cout << "Ваш хід: " << user1 << " + " << user2 << " = " << user1 + user2 << endl;
        userTotal += user1 + user2;

        int comp1 = rand() % 6 + 1;
        int comp2 = rand() % 6 + 1;
        cout << "Комп'ютер: " << comp1 << " + " << comp2 << " = " << comp1 + comp2 << endl << endl;
        compTotal += comp1 + comp2;
    }

    cout << "=== РЕЗУЛЬТАТИ ===\n";
    cout << "Ви: " << userTotal << "\nКомп'ютер: " << compTotal << endl;

    if (userTotal > compTotal)
        cout << "Ви перемогли!\n";
    else if (userTotal < compTotal)
        cout << "Переміг комп'ютер.\n";
    else
        cout << "Нічия!\n";

    return 0;
}
