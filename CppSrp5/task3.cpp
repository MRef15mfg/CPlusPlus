#include <iostream>
using namespace std;

int main() {
    int num1, num2, qwix = 0;
    cout << "Input number 1 : ";
    cin >> num1;
    cout << "Input number 2 : ";
    cin >> num2;
    int zxc = num1;
    if (num1 > num2) {
        num1 = num2;
        num2 = zxc;
    }
    for ( ; num1 <= num2; ++num1) {
        cout << num1 << endl;
        qwix = qwix + num1;
    }
    cout << "Result : " << qwix << endl;
    
    return 0;
}
