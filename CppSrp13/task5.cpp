#include <iostream>
using namespace std;

int main()
{
    double grades[10];
    cout << "Введіть 10 оцінок студента:\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> grades[i];
    }

    while (true)
    {
        cout << "\nМеню:\n";
        cout << "1. Вивід оцінок\n";
        cout << "2. Перездача (змінити оцінку)\n";
        cout << "3. Перевірка на стипендію\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";

        int choice;
        cin >> choice;

        if (choice == 0) break;

        switch (choice)
        {
            case 1:
                cout << "Оцінки студента:\n";
                for (int i = 0; i < 10; i++)
                {
                    cout << i + 1 << ": " << grades[i] << endl;
                }
                break;

            case 2:
                int index;
                double newGrade;
                cout << "Номер оцінки для зміни (1-10): ";
                cin >> index;
                if (index < 1 || index > 10)
                {
                    cout << "Невірний номер!\n";
                    break;
                }
                cout << "Нова оцінка: ";
                cin >> newGrade;
                grades[index - 1] = newGrade;
                cout << "Оцінка змінена.\n";
                break;

            case 3:
                double sum = 0;
                for (int i = 0; i < 10; i++)
                {
                    sum += grades[i];
                }
                double avg = sum / 10.0;
                if (avg >= 10.7)
                {
                    cout << "Стипендія виходить! (Середній бал = " << avg << ")\n";
                }
                else
                {
                    cout << "Стипендія не виходить (Середній бал = " << avg << ")\n";
                }
                break;

            default:
                cout << "Невірний вибір!\n";
        }
    }

    return 0;
}
