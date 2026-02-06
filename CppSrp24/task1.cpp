#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Abonent
{
private:
    string pib;
    string homePhone;
    string workPhone;
    string mobilePhone;
    string info;

public:
    static int count;

    Abonent() : Abonent("Невідомо", "", "", "", "") {}

    Abonent(string pib) : Abonent(pib, "", "", "", "") {}

    Abonent(string pib, string home, string work, string mobile, string info)
    {
        this->pib = pib;
        homePhone = home;
        workPhone = work;
        mobilePhone = mobile;
        this->info = info;
        count++;
    }

    ~Abonent()
    {
        count--;
    }

    string GetName() const
    {
        return pib;
    }

    string GetMobile() const
    {
        return mobilePhone;
    }

    void Show() const
    {
        cout << "ПІБ: " << pib << endl;
        cout << "Домашній телефон: " << homePhone << endl;
        cout << "Робочий телефон: " << workPhone << endl;
        cout << "Мобільний телефон: " << mobilePhone << endl;
        cout << "Додаткова інформація: " << info << endl;
        cout << "---------------------------" << endl;
    }

    void SaveToFile(ofstream& file) const
    {
        file << pib << endl;
        file << homePhone << endl;
        file << workPhone << endl;
        file << mobilePhone << endl;
        file << info << endl;
    }

    void LoadFromFile(ifstream& file)
    {
        getline(file, pib);
        getline(file, homePhone);
        getline(file, workPhone);
        getline(file, mobilePhone);
        getline(file, info);
    }
};

int Abonent::count = 0;

class PhoneBook
{
private:
    Abonent* abonents;
    int countAbonent;

public:
    PhoneBook()
    {
        abonents = nullptr;
        countAbonent = 0;
    }

    ~PhoneBook()
    {
        delete[] abonents;
    }

    void Add(const Abonent& a)
    {
        Abonent* temp = new Abonent[countAbonent + 1];

        for (int i = 0; i < countAbonent; i++)
        {
            temp[i] = abonents[i];
        }

        temp[countAbonent] = a;

        delete[] abonents;
        abonents = temp;
        countAbonent++;
    }

    void Delete(string phone)
    {
        for (int i = 0; i < countAbonent; i++)
        {
            if (abonents[i].GetMobile() == phone)
            {
                for (int j = i; j < countAbonent - 1; j++)
                {
                    abonents[j] = abonents[j + 1];
                }

                countAbonent--;
                return;
            }
        }
    }

    void SearchByName(string name) const
    {
        for (int i = 0; i < countAbonent; i++)
        {
            if (abonents[i].GetName() == name)
            {
                abonents[i].Show();
            }
        }
    }

    void SearchByPhone(string phone) const
    {
        for (int i = 0; i < countAbonent; i++)
        {
            if (abonents[i].GetMobile() == phone)
            {
                abonents[i].Show();
            }
        }
    }

    void ShowAll() const
    {
        for (int i = 0; i < countAbonent; i++)
        {
            abonents[i].Show();
        }
    }

    void SaveOneToFile(const string& filename, int index) const
    {
        ofstream file(filename);

        if (file && index < countAbonent)
        {
            abonents[index].SaveToFile(file);
        }

        file.close();
    }

    void LoadOneFromFile(const string& filename)
    {
        ifstream file(filename);

        if (!file)
        {
            return;
        }

        Abonent a;
        a.LoadFromFile(file);
        Add(a);

        file.close();
    }
};

int main()
{
    PhoneBook book;

    Abonent a1("Іваненко Іван Іванович", "123-45-67", "234-56-78", "0991112233", "Друг");
    Abonent a2("Петренко Петро Петрович", "", "", "0679876543", "Колега");

    book.Add(a1);
    book.Add(a2);

    cout << "Всі абоненти:" << endl;
    book.ShowAll();

    cout << "Пошук за ПІБ:" << endl;
    book.SearchByName("Іваненко Іван Іванович");

    book.SaveOneToFile("abonent.txt", 0);

    PhoneBook bookFromFile;
    bookFromFile.LoadOneFromFile("abonent.txt");

    cout << "Абонент з файлу:" << endl;
    bookFromFile.ShowAll();

    return 0;
}
