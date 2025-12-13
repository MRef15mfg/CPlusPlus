#include <iostream>
#include <string>
using namespace std;

struct Car {
    double length;
    double clearance;
    double engineVolume;
    int power;
    double wheelDiameter;
    string color;
    string gearbox;
};

void setCar(Car &c, double length, double clearance, double engineVolume,
            int power, double wheelDiameter, string color, string gearbox) {
    c.length = length;
    c.clearance = clearance;
    c.engineVolume = engineVolume;
    c.power = power;
    c.wheelDiameter = wheelDiameter;
    c.color = color;
    c.gearbox = gearbox;
}

void showCar(const Car &c) {
    cout << "Length: " << c.length << endl;
    cout << "Clearance: " << c.clearance << endl;
    cout << "Engine Volume: " << c.engineVolume << endl;
    cout << "Power: " << c.power << endl;
    cout << "Wheel Diameter: " << c.wheelDiameter << endl;
    cout << "Color: " << c.color << endl;
    cout << "Gearbox: " << c.gearbox << endl;
}

void findByColor(Car cars[], int n, string color) {
    for (int i = 0; i < n; i++) {
        if (cars[i].color == color) {
            cout << "\nFound car with color " << color << ":\n";
            showCar(cars[i]);
        }
    }
}

int main() {
    Car cars[2];

    setCar(cars[0], 4.5, 0.18, 2.0, 150, 17, "red", "automatic");
    setCar(cars[1], 4.2, 0.16, 1.6, 110, 16, "black", "manual");

    cout << "Cars:\n";
    showCar(cars[0]);
    cout << endl;
    showCar(cars[1]);

    findByColor(cars, 2, "red");

    return 0;
}
