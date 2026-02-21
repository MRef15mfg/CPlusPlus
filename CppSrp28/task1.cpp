#include <iostream>
#include <string>
using namespace std;

// ==================== Завдання №1 ====================

class Student {
protected:
    string name;
    int age;
    string faculty;
    double averageGrade;

public:
    Student(string n, int a, string f, double avg)
        : name(n), age(a), faculty(f), averageGrade(avg) {}

    virtual void showInfo() const {
        cout << "Ім'я: " << name << endl;
        cout << "Вік: " << age << endl;
        cout << "Факультет: " << faculty << endl;
        cout << "Середній бал: " << averageGrade << endl;
    }

    virtual double getScholarship() const {
        if (averageGrade >= 90)
            return 2000;
        else
            return 1000;
    }

    virtual ~Student() {}
};

class Aspirant : public Student {
private:
    string thesisTopic;

public:
    Aspirant(string n, int a, string f, double avg, string topic)
        : Student(n, a, f, avg), thesisTopic(topic) {}

    void showInfo() const override {
        Student::showInfo();
        cout << "Тема дисертації: " << thesisTopic << endl;
    }

    double getScholarship() const override {
        if (averageGrade >= 90)
            return 3000;
        else
            return 2000;
    }
};

// ==================== Завдання №2 ====================

class Passport {
protected:
    string fullName;
    string birthDate;
    string passportNumber;

public:
    Passport(string name, string date, string number)
        : fullName(name), birthDate(date), passportNumber(number) {}

    virtual void showPassportInfo() const {
        cout << "ПІБ: " << fullName << endl;
        cout << "Дата народження: " << birthDate << endl;
        cout << "Номер паспорта: " << passportNumber << endl;
    }

    virtual ~Passport() {}
};

class ForeignPassport : public Passport {
private:
    string foreignPassportNumber;
    string visas;

public:
    ForeignPassport(string name, string date, string number,
                    string foreignNumber, string visaInfo)
        : Passport(name, date, number),
          foreignPassportNumber(foreignNumber),
          visas(visaInfo) {}

    void showPassportInfo() const override {
        Passport::showPassportInfo();
        cout << "Номер закордонного паспорта: "
             << foreignPassportNumber << endl;
        cout << "Візи: " << visas << endl;
    }
};


int main() {

    cout << "===== Студент =====" << endl;
    Student s("Іван Петренко", 19, "ІТ", 92);
    s.showInfo();
    cout << "Стипендія: " << s.getScholarship() << endl;

    cout << "\n===== Аспірант =====" << endl;
    Aspirant a("Олена Коваль", 24, "Фізика", 95, "Квантова механіка");
    a.showInfo();
    cout << "Стипендія: " << a.getScholarship() << endl;

    cout << "\n===== Паспорт =====" << endl;
    Passport p("Іван Петренко", "01.01.2005", "АА123456");
    p.showPassportInfo();

    cout << "\n===== Закордонний паспорт =====" << endl;
    ForeignPassport fp("Олена Коваль", "12.05.2000",
                       "ВВ654321", "FP987654", "Шенген");
    fp.showPassportInfo();

    return 0;
}