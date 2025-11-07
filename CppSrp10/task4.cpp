#include <iostream>
#include <string>
using namespace std;

void printCard(int value, int suit) {
    string valueName;
    string suitName;

    switch (value) {
        case 6:
            valueName = "6";
            break;
        case 7:
            valueName = "7";
            break;
        case 8:
            valueName = "8";
            break;
        case 9:
            valueName = "9";
            break;
        case 10:
            valueName = "10";
            break;
        case 11:
            valueName = "Валет";
            break;
        case 12:
            valueName = "Дама";
            break;
        case 13:
            valueName = "Король";
            break;
        case 14:
            valueName = "Туз";
            break;
        default:
            valueName = "Невідома карта";
            break;
    }

    switch (suit) {
        case 1:
            suitName = "Піки";
            break;
        case 2:
            suitName = "Трефи";
            break;
        case 3:
            suitName = "Бубни";
            break;
        case 4:
            suitName = "Черви";
            break;
        default:
            suitName = "Невідома масть";
            break;
    }

    cout << "Ваша карта: " << valueName << " " << suitName << endl;
}

int main() {
    int value, suit;

    cout << "Введіть значення карти (6–14): ";
    cin >> value;

    cout << "Введіть масть (1–Піки, 2–Трефи, 3–Бубни, 4–Черви): ";
    cin >> suit;

    printCard(value, suit);

    return 0;
}
