#include <iostream>
#include <string>

using namespace std;

struct Vagon {
    int number;
    int seats;
    int passengers;

    Vagon() : number(0), seats(0), passengers(0) {}

    Vagon(int n, int s, int p) {
        number = n;
        seats = s;
        passengers = p;
    }
};

class Train {
private:
    string model;
    int count;
    Vagon* vagon;

public:
    Train() {
        model = "Unknown";
        count = 0;
        vagon = nullptr;
    }

    Train(string m) {
        model = m;
        count = 0;
        vagon = nullptr;
    }

    Train(const Train& other) {
        model = other.model;
        count = other.count;

        if (count > 0) {
            vagon = new Vagon[count];
            for (int i = 0; i < count; i++) {
                vagon[i] = other.vagon[i];
            }
        } else {
            vagon = nullptr;
        }
    }

    ~Train() {
        delete[] vagon;
    }

    void Show() const {
        cout << "Модель потяга: " << model << endl;
        cout << "Кількість вагонів: " << count << endl;

        for (int i = 0; i < count; i++) {
            cout << "Вагон №" << vagon[i].number
                 << " | Місць: " << vagon[i].seats
                 << " | Пасажирів: " << vagon[i].passengers << endl;
        }
        cout << endl;
    }

    void AddVagon(const Vagon& newVagon) {
        Vagon* temp = new Vagon[count + 1];

        for (int i = 0; i < count; i++) {
            temp[i] = vagon[i];
        }

        temp[count] = newVagon;

        delete[] vagon;
        vagon = temp;
        count++;
    }

    void AddPassenger(int vagonNumber) {
        for (int i = 0; i < count; i++) {
            if (vagon[i].number == vagonNumber) {
                if (vagon[i].passengers < vagon[i].seats) {
                    vagon[i].passengers++;
                }
                return;
            }
        }
    }
};

int main() {
    Train t1("Hyundai");

    t1.AddVagon(Vagon(1, 50, 45));
    t1.AddVagon(Vagon(2, 60, 60));
    t1.AddVagon(Vagon(3, 40, 10));

    t1.Show();

    t1.AddPassenger(1);
    t1.AddPassenger(2);

    t1.Show();

    Train t2 = t1;
    t2.Show();

    return 0;
}
