#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string fullName;
    string birthDate;
    string phone;
    string city;
    string country;
    string university;
    string universityCity;
    string universityCountry;
    string groupNumber;

public:
    void input() {
        cout << "ПІБ: ";
        getline(cin, fullName);

        cout << "Дата народження: ";
        getline(cin, birthDate);

        cout << "Телефон: ";
        getline(cin, phone);

        cout << "Місто проживання: ";
        getline(cin, city);

        cout << "Країна проживання: ";
        getline(cin, country);

        cout << "Навчальний заклад: ";
        getline(cin, university);

        cout << "Місто навчального закладу: ";
        getline(cin, universityCity);

        cout << "Країна навчального закладу: ";
        getline(cin, universityCountry);

        cout << "Номер групи: ";
        getline(cin, groupNumber);
    }

    void output() const {
        cout << "\n--- Дані студента ---\n";
        cout << "ПІБ: " << fullName << endl;
        cout << "Дата народження: " << birthDate << endl;
        cout << "Телефон: " << phone << endl;
        cout << "Місто: " << city << endl;
        cout << "Країна: " << country << endl;
        cout << "Навчальний заклад: " << university << endl;
        cout << "Місто навчального закладу: " << universityCity << endl;
        cout << "Країна навчального закладу: " << universityCountry << endl;
        cout << "Група: " << groupNumber << endl;
    }

    string getFullName() const {
        return fullName;
    }
};

int main() {
    Student student;
    student.input();
    student.output();

    return 0;
}
