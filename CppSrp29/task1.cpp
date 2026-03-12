#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string species;
    double speed;
    double weight;
    string habitat;

public:
    Animal(string sp, double s, double w, string h) 
        : species(sp), speed(s), weight(w), habitat(h) {}

    virtual void Move() {
        cout << species << " moves at " << speed << " km/h." << endl;
    }

    virtual void Say() {
        cout << species << " makes a sound." << endl;
    }

    virtual void Show() {
        cout << "Species: " << species << " | Weight: " << weight << "kg | Habitat: " << habitat << endl;
    }

    virtual ~Animal() {}
};

class Bird : public Animal {
public:
    Bird(string sp, double s, double w, string h) : Animal(sp, s, w, h) {}
    
    void Move() override {
        cout << species << " flies in the sky." << endl;
    }
};

class Reptile : public Animal {
public:
    Reptile(string sp, double s, double w, string h) : Animal(sp, s, w, h) {}

    void Move() override {
        cout << species << " crawls on the ground." << endl;
    }
};

class Fish : public Animal {
public:
    Fish(string sp, double s, double w, string h) : Animal(sp, s, w, h) {}

    void Move() override {
        cout << species << " swims in the water." << endl;
    }
};

class Eagle : public Bird {
public:
    Eagle() : Bird("Eagle", 160, 6, "Mountains") {}
    void Say() override { cout << "Eagle: Screech!" << endl; }
};

class Snake : public Reptile {
public:
    Snake() : Reptile("Snake", 5, 2, "Desert") {}
    void Say() override { cout << "Snake: Hiss!" << endl; }
};

class Salmon : public Fish {
public:
    Salmon() : Fish("Salmon", 30, 4, "River") {}
    void Say() override { cout << "Salmon is silent." << endl; }
};

int main() {
    Eagle eagle;
    Snake snake;
    Salmon salmon;

    eagle.Show();
    eagle.Move();
    eagle.Say();

    cout << endl;

    snake.Show();
    snake.Move();
    snake.Say();

    cout << endl;

    salmon.Show();
    salmon.Move();
    salmon.Say();

    return 0;
}