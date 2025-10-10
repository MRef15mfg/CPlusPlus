#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Input number 1 : ";
    cin >> num1;
    cout << "Input number 2 : ";
    cin >> num2;
    int zxc = num1;
    if (num1 > num2) {
        num1 = num2;
        num2 = zxc;
    }
    for ( ; num1 <= num2; num1++) {
        cout << num1 << endl;
    }
    
    for ( ; num1 <= num2; num1++) {
        if (num1%2){
            cout << num1 << endl;
        }
    }

    for ( ; num1 <= num2; num1++) {
        if (num1%2 == 0){
            cout << num1 << endl;
        }
    }

    for ( ; num1 <= num2; num1++) {
        if (num1%7 == 0){
            cout << num1 << endl;
        }
    }

    return 0;
}
