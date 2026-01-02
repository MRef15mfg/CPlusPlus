#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Student {
private:
    char* name;
    int age;
    int* marks;
    int marksCount;
    double averageMark;

    void setAverageMark() {
        if (marksCount == 0) {
            averageMark = 0;
            return;
        }

        int sum = 0;
        for (int i = 0; i < marksCount; i++)
            sum += marks[i];

        averageMark = static_cast<double>(sum) / marksCount;
    }

public:
    Student() : Student("No name", 0) {}

    Student(const char* n, int a)
        : age(a), marks(nullptr), marksCount(0), averageMark(0) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    ~Student() {
        delete[] name;
        delete[] marks;
    }

    void AddMark(int mark) {
        if (mark < 0 || mark > 12)
            return;

        int* newMarks = new int[marksCount + 1];
        for (int i = 0; i < marksCount; i++)
            newMarks[i] = marks[i];

        newMarks[marksCount] = mark;

        delete[] marks;
        marks = newMarks;
        marksCount++;

        setAverageMark();
    }

    void Print() const {
        cout << "\nStudent:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: ";

        for (int i = 0; i < marksCount; i++)
            cout << marks[i] << " ";

        cout << "\nAverage: " << averageMark << endl;
    }

    void Save(const char* filename) const {
        ofstream file(filename);
        if (!file) return;

        file << name << endl;
        file << age << endl;
        file << marksCount << endl;

        for (int i = 0; i < marksCount; i++)
            file << marks[i] << " ";

        file.close();
    }

    void Load(const char* filename) {
        ifstream file(filename);
        if (!file) return;

        char buffer[256];
        file.getline(buffer, 256);

        delete[] name;
        name = new char[strlen(buffer) + 1];
        strcpy(name, buffer);

        file >> age;
        file >> marksCount;

        delete[] marks;
        marks = new int[marksCount];

        for (int i = 0; i < marksCount; i++)
            file >> marks[i];

        setAverageMark();
        file.close();
    }

    const char* getName() const { return name; }
    int getAge() const { return age; }
    double getAverage() const { return averageMark; }

    void setAge(int a) {
        if (a >= 0) age = a;
    }
};

int main() {
    Student s1("Ivan", 19);
    s1.AddMark(10);
    s1.AddMark(8);
    s1.AddMark(12);
    s1.Print();

    s1.Save("student.txt");

    Student s2;
    s2.Load("student.txt");
    s2.Print();

    return 0;
}
