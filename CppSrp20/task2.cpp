#include <iostream>
#include <fstream>

using namespace std;

class Point {
private:
    double x, y, z;

public:
    void input() {
        cout << "Введіть x: ";
        cin >> x;
        cout << "Введіть y: ";
        cin >> y;
        cout << "Введіть z: ";
        cin >> z;
    }

    void output() const {
        cout << "Точка: (" << x << ", " << y << ", " << z << ")" << endl;
    }

    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }

    void saveToFile(const string& filename) const {
        ofstream file(filename);
        if (file.is_open()) {
            file << x << " " << y << " " << z;
            file.close();
        } else {
            cout << "Помилка запису у файл\n";
        }
    }

    void loadFromFile(const string& filename) {
        ifstream file(filename);
        if (file.is_open()) {
            file >> x >> y >> z;
            file.close();
        } else {
            cout << "Помилка читання з файлу\n";
        }
    }
};

int main() {
    Point p;
    p.input();
    p.saveToFile("point.txt");

    Point p2;
    p2.loadFromFile("point.txt");
    p2.output();

    return 0;
}
