#include <iostream>
using namespace std;

void b() {
    for (int i = 0; i <= 10; i++) {
        cout << endl;
        for (int q = 1; q <= i; q++) {
            cout << "*";
        }
    }
}

void u() {
    for (int i = 10; i >= 0; i--) {
        cout << endl;
        for (int q = 1; q <= i; q++) {
            cout << "*";
        }
    }
}

void a() {
    for (int f = 0; f <= 10; f++) {
        cout << endl;
        for (int l = 0; l <= f; l++) {
            cout << " ";
        }
        
        for (int q = 10; q >= f; q--) {
            cout << "*";
        }
    }
}

void g() {
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void v() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j < 5; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

}

void d() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j < 5; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++)
        {
            cout << " ";
        }
    
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
}

void e() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j < 5; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << " ";
        }
        for (int j = i; j < 5; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++)
        {
            cout << "*";
        }
    
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << " ";
        }
        for (int j = i; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void zh() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j < 5; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++)
        {
            cout << "*";
        }
    
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    
}

void z() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j < 5; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << " ";
        }
        for (int j = i; j < 5; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) {
            cout << " ";
        }
    
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << " ";
        }
        for (int j = i; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}


void k() {
    for (int i = 1; i <= 10; i++) {
        for (int j = i; j < 10; j++)
        {
            cout << " ";
        }
    
        for (int j = 1; j <= i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


int main() {
    int choice;
    do {
        cout << "\n===== МЕНЮ ФІГУР =====\n";
        cout << "1. b()\n";
        cout << "2. u()\n";
        cout << "3. a()\n";
        cout << "4. g()\n";
        cout << "5. v()\n";
        cout << "6. d()\n";
        cout << "7. e()\n";
        cout << "8. zh()\n";
        cout << "9. z()\n";
        cout << "10. k()\n";
        cout << "0. Вихід\n";
        cout << "-----------------------\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        cout << endl;

        switch (choice) {
            case 1: b(); break;
            case 2: u(); break;
            case 3: a(); break;
            case 4: g(); break;
            case 5: v(); break;
            case 6: d(); break;
            case 7: e(); break;
            case 8: zh(); break;
            case 9: z(); break;
            case 10: k(); break;
            case 0: cout << "Вихід з програми.\n"; break;
            default: cout << "Невірний вибір!\n"; break;
        }

        cout << endl;

    } while (choice != 0);


}
