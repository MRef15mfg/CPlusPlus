#include <iostream>
#include <string>

using namespace std;

class Array {
private:
    int* data;
    int size;

public:
    Array(int s) {
        size = s;
        data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = 0;
        }
    }

    ~Array() {
        delete[] data;
    }

    int& operator[](int index) {
        return data[index];
    }

    void operator()(int value) {
        for (int i = 0; i < size; i++) {
            data[i] += value;
        }
    }

    operator int() const {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += data[i];
        }
        return sum;
    }

    operator string() const {
        string res = "";
        for (int i = 0; i < size; i++) {
            res += to_string(data[i]) + " ";
        }
        return res;
    }
};

int main() {
    Array arr(5);

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    arr(2);

    int sum = arr;
    cout << "Сума елементів: " << sum << endl;

    string str = arr;
    cout << "Масив: " << str << endl;

    return 0;
}
