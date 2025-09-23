#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float diameter, S, P;
    cout << "Запишіть діметр окружності : ";
    cin >> diameter;
    S = (3.14159 * pow(diameter, 2)) / 4;
    P = 3.14159 * diameter;
    cout << "\nПлоща : " << S << "\nПериметр : " << P << endl;
    return 0;
}