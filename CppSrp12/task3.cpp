#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int level;
    cout << "Оберіть рівень складності:\n"
         << "1 — легкий (5 питань)\n"
         << "2 — середній (10 питань)\n"
         << "3 — важкий (15 питань)\n";

    cin >> level;

    int questions = (level == 1) ? 5 : (level == 2) ? 10 : 15;
    int maxNum = (level == 1) ? 5 : (level == 2) ? 10 : 20;

    int score = 0;

    for (int i = 0; i < questions; i++)
    {
        int a = rand() % maxNum + 1;
        int b = rand() % maxNum + 1;

        int answer;
        cout << a << " * " << b << " = ";
        cin >> answer;

        if (answer == a * b)
        {
            cout << "Правильно!\n";
            score++;
        }
        else
        {
            cout << "Неправильно! Правильна відповідь: " << (a * b) << "\n";
        }
    }

    cout << "Правильних відповідей: " << score << " з " << questions << endl;

    if (score == questions) cout << "Оцінка: Відмінно!\n";
    else if (score >= questions * 0.7) cout << "Оцінка: Добре\n";
    else if (score >= questions * 0.4) cout << "Оцінка: Задовільно\n";
    else cout << "Оцінка: Погано\n";

    return 0;
}
