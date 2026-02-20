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
    Time startTime(1, 30, 45);
    Time duration(5555);

    cout << "Start time = ";
    startTime.print();

    cout << "Duration = ";
    duration.print();

    Time resultTime = startTime + duration;
    cout << "Start time + Duration = ";
    resultTime.print();

    ++startTime;
    cout << "Start time after ++ : ";
    startTime.print();

    if (startTime > duration) {
        cout << "Start time більше Duration" << endl;
    } else {
        cout << "Start time менше або дорівнює Duration" << endl;
    }

    return 0;
}