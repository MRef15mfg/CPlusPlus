#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    int h;
    int m;
    int s;

    int toSeconds() const {
        return h * 3600 + m * 60 + s;
    }

public:
    Time() {
        h = 0;
        m = 0;
        s = 0;
    }

    Time(int hours, int minutes, int seconds) {
        h = hours;
        m = minutes;
        s = seconds;
    }

    explicit Time(int seconds) {
        h = seconds / 3600;
        m = (seconds / 60) % 60;
        s = seconds % 60;
    }

    void print() const {
        cout << setfill('0')
             << setw(2) << h << ":"
             << setw(2) << m << ":"
             << setw(2) << s << endl;
    }

    Time& operator++() {
        s++;
        if (s == 60) {
            s = 0;
            m++;
        }
        if (m == 60) {
            m = 0;
            h++;
        }
        return *this;
    }

    Time operator+(const Time& other) const {
        return Time(this->toSeconds() + other.toSeconds());
    }

    Time operator-(const Time& other) const {
        return Time(this->toSeconds() - other.toSeconds());
    }

    Time operator*(const Time& other) const {
        return Time(this->toSeconds() * other.toSeconds());
    }

    Time operator/(const Time& other) const {
        return Time(this->toSeconds() / other.toSeconds());
    }


    bool operator>(const Time& other) const {
        return this->toSeconds() > other.toSeconds();
    }

    bool operator<(const Time& other) const {
        return this->toSeconds() < other.toSeconds();
    }

    bool operator>=(const Time& other) const {
        return this->toSeconds() >= other.toSeconds();
    }

    bool operator<=(const Time& other) const {
        return this->toSeconds() <= other.toSeconds();
    }

    bool operator==(const Time& other) const {
        return this->toSeconds() == other.toSeconds();
    }

    bool operator!=(const Time& other) const {
        return this->toSeconds() != other.toSeconds();
    }
};

int main() {
    Time t1(1, 30, 45);
    Time t2(5555);

    cout << "t1 = ";
    t1.print();

    cout << "t2 = ";
    t2.print();

    Time t3 = t1 + t2;
    cout << "t1 + t2 = ";
    t3.print();

    ++t1;
    cout << "t1 після ++ : ";
    t1.print();

    if (t1 > t2) {
        cout << "t1 більше t2" << endl;
    } else {
        cout << "t1 менше або дорівнює t2" << endl;
    }

    return 0;
}
