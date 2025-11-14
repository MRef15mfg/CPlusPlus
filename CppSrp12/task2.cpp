#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 4;

    string names[SIZE] = {"Гірлянда", "Кулі", "Мішура", "Хлопавка"};
    int prices[SIZE] = {300, 150, 50, 80};
    int stock[SIZE]  = {10, 20, 30, 15};

    double totalProfit = 0.0;
    bool work = true;

    while (work)
    {
        double total = 0.0;

        cout << "\n--- Новий клієнт ---\n";

        while (true)
        {
            cout << "\nОберіть товар:\n";
            for (int i = 0; i < SIZE; i++)
            {
                cout << i + 1 << ". " << names[i]
                     << " — " << prices[i] << " грн"
                     << " (на складі " << stock[i] << ")\n";
            }
            cout << "0. Завершити покупку\n";

            int choice;
            cout << "Ваш вибір: ";
            cin >> choice;

            if (choice == 0)
            {
                break;
            }

            if (choice < 1 || choice > SIZE)
            {
                cout << "Невірний вибір!\n";
                continue;
            }

            int index = choice - 1;
            int qty;

            cout << "Скільки одиниць: ";
            cin >> qty;

            if (qty <= 0)
            {
                cout << "Кількість повинна бути > 0!\n";
                continue;
            }

            if (qty > stock[index])
            {
                cout << "Такої кількості немає на складі!\n";
                continue;
            }

            stock[index] -= qty;
            total += prices[index] * qty;

            cout << "Додано!\n";
        }

        int discount = 0;

        if (total >= 500) discount = 10;
        else if (total >= 300) discount = 5;

        double finalSum = total - (total * discount / 100.0);

        cout << "Сума покупки: " << finalSum
             << " грн (знижка " << discount << "%)\n";

        totalProfit += finalSum;

        cout << "Обслуговувати наступного клієнта? (1 — так, 0 — ні): ";
        int ans;
        cin >> ans;
        if (ans == 0)
        {
            work = false;
        }
    }

    cout << "\nЗагальна виручка крамниці: " << totalProfit << " грн\n";

    return 0;
}
