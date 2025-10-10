#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 500 + 1;
    int guess;
    int attempts = 0;

    cout << "Я загадав число від 1 до 500." << endl;
    cout << "Спробуй вгадати (введи 0, щоб вийти):" << endl;

    while (true) {
        cout << "Твоя спроба: ";
        cin >> guess;

        if (guess == 0) {
            cout << "Вихід з гри. Загадане число було: " << secret << endl;
            break;
        }

        attempts++;

        if (guess == secret) {
            cout << "Молодець! Ти вгадав число за " << attempts << " спроб!" << endl;
            break;
        } else if (guess < secret) {
            cout << "Моє число більше!" << endl;
        } else {
            cout << "Моє число менше!" << endl;
        }
    }

    return 0;
}
