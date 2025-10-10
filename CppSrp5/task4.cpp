#include <iostream>
using namespace std;

int main() {
    int num, result = 0;
    while (true) {
        cout << "Вводьте числа : ";
        cin >> num;
        result = result + num;
        if (num == 0){
            cout << "Result : "<< result << endl;
            break;
        }
    }

    return 0;
}
