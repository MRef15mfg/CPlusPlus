#include <iostream>

using namespace std;

struct Coord {
    int x;
    int y;
};

class Rectangle {
private:
    int width;
    int height;
    char symbol;
    Coord position;

    bool isValidSize(int w, int h) const {
        return w > 0 && h > 0;
    }

public:
    Rectangle() : width(5), height(3), symbol('#'), position{0, 0} {}

    Rectangle(int size) : Rectangle(size, size) {}

    Rectangle(int w, int h) : width(1), height(1), symbol('#'), position{0, 0} {
        if (isValidSize(w, h)) {
            width = w;
            height = h;
        }
    }

    void draw() const {
        cout << "\nRectangle at (" << position.x << ", " << position.y << ")\n";

        for (int i = 0; i < position.y; i++)
            cout << endl;

        for (int i = 0; i < height; i++) {
            for (int s = 0; s < position.x; s++)
                cout << ' ';

            for (int j = 0; j < width; j++)
                cout << symbol;

            cout << endl;
        }
    }

    void resize(int deltaHeight, int deltaWidth) {
        int newHeight = height + deltaHeight;
        int newWidth = width + deltaWidth;

        if (isValidSize(newWidth, newHeight)) {
            height = newHeight;
            width = newWidth;
        }
    }

    void move(int dx, int dy) {
        if (position.x + dx >= 0)
            position.x += dx;
        if (position.y + dy >= 0)
            position.y += dy;
    }

    int getWidth() const { return width; }
    int getHeight() const { return height; }

    void setSymbol(char s) { symbol = s; }
};

int main() {
    Rectangle r1;
    r1.draw();

    Rectangle r2(4);
    r2.setSymbol('*');
    r2.move(5, 2);
    r2.draw();

    r2.resize(2, 3);
    r2.move(2, 1);
    r2.draw();

    return 0;
}
