#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Entity {
public:
    virtual void Show() = 0;
    virtual ~Entity() {}
};

class Plant : public Entity {
public:
    bool isEaten = false;
};

class Grass : public Plant {
public:
    void Show() override { cout << "Трава"; }
};

class Animal : public Entity {
protected:
    int age;
    int maxAge;
public:
    Animal(int m) : age(0), maxAge(m) {}
    bool isDead() { return age >= maxAge; }
    void grow() { age++; }
};

class Rabbit : public Animal {
public:
    Rabbit() : Animal(5) {}
    void Show() override { cout << "Кролик(" << age << ")"; }
};

class Fox : public Animal {
public:
    Fox() : Animal(8) {}
    void Show() override { cout << "Лисиця(" << age << ")"; }
};

class Life {
private:
    vector<Grass*> field;
    vector<Rabbit*> rabbits;
    vector<Fox*> foxes;

public:
    void setup(int gCount, int rCount, int fCount) {
        for (int i = 0; i < gCount; i++) field.push_back(new Grass());
        for (int i = 0; i < rCount; i++) rabbits.push_back(new Rabbit());
        for (int i = 0; i < fCount; i++) foxes.push_back(new Fox());
    }

    void simulateStep() {
        cout << "\n--- Новий хід симуляції ---" << endl;

        if (field.size() < rabbits.size()) {
            int eaten = rabbits.size() - field.size();
            for (int i = 0; i < eaten && !field.empty(); i++) {
                delete field.back();
                field.pop_back();
            }
            cout << "Кролики з'їли всю траву!" << endl;
        }

        if (rabbits.size() < foxes.size()) {
            int eaten = foxes.size() - rabbits.size();
            for (int i = 0; i < eaten && !rabbits.empty(); i++) {
                delete rabbits.back();
                rabbits.pop_back();
            }
            cout << "Лисиці полювали на кроликів!" << endl;
        }

        for (auto it = foxes.begin(); it != foxes.end(); ) {
            (*it)->grow();
            if ((*it)->isDead()) {
                delete *it;
                it = foxes.erase(it);
                cout << "Лисиця померла від старості." << endl;
            } else {
                ++it;
            }
        }

        if (foxes.size() < 5) {
            foxes.push_back(new Fox());
            cout << "Народилася нова лисиця." << endl;
        }

        cout << "Стан: Трави: " << field.size() 
             << ", Кроликів: " << rabbits.size() 
             << ", Лисиць: " << foxes.size() << endl;
    }

    ~Life() {
        for (auto p : field) delete p;
        for (auto r : rabbits) delete r;
        for (auto f : foxes) delete f;
    }
};

int main() {
    Life ecosystem;
    ecosystem.setup(10, 5, 3);

    for (int i = 0; i < 5; i++) {
        ecosystem.simulateStep();
    }

    return 0;
}