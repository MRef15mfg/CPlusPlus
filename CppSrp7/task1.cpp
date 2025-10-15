#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int choice, speed, length;
    char symbol;

    cout << "1.Горизонтальна  2.Вертикальна\nВибір: ";
    cin >> choice;

    cout << "Символ: ";
    cin >> symbol;

    cout << "Довжина: ";
    cin >> length;

    cout << "Швидкість (1-швидко,2-нормально,3-повільно): ";
    cin >> speed;

    int delay = (speed == 1 ? 50 : speed == 2 ? 200 : 500);

    for (int i = 0; i < length; i++) {
        cout << symbol;
        if (choice == 2) cout << endl;
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(delay));
    }

    if (choice == 1) cout << endl;

    return 0;
}
