#include <iostream>
using namespace std;

struct Complex {
    double re;
    double im;
};

Complex add(Complex a, Complex b) {
    return { a.re + b.re, a.im + b.im };
}

Complex sub(Complex a, Complex b) {
    return { a.re - b.re, a.im - b.im };
}

Complex mul(Complex a, Complex b) {
    return {
        a.re * b.re - a.im * b.im,
        a.re * b.im + a.im * b.re
    };
}

Complex divv(Complex a, Complex b) {
    double d = b.re*b.re + b.im*b.im;
    return {
        (a.re * b.re + a.im * b.im) / d,
        (a.im * b.re - a.re * b.im) / d
    };
}

void print(Complex c) {
    cout << c.re << (c.im >= 0 ? "+" : "") << c.im << "i";
}

int main() {
    Complex a = {3, 2};
    Complex b = {1, -4};

    cout << "a = "; print(a); cout << endl;
    cout << "b = "; print(b); cout << endl;

    cout << "a + b = "; print(add(a,b)); cout << endl;
    cout << "a - b = "; print(sub(a,b)); cout << endl;
    cout << "a * b = "; print(mul(a,b)); cout << endl;
    cout << "a / b = "; print(divv(a,b)); cout << endl;

    return 0;
}
