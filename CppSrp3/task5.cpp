#include <iostream>
using namespace std;

int main() {
    int hryvnias, kopecks;
    cout << "Введіть гривні та копійки через пробіл: ";
    cin >> hryvnias >> kopecks;

    hryvnias = hryvnias + kopecks / 100;
    kopecks = kopecks % 100;

    cout << "Сума: " << hryvnias << " грн " << kopecks << " коп" << endl;

    return 0;
}
