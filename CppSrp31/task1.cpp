#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

template <typename T>
class Stack {
private:
    T* data;
    int topIndex;
    int capacity;

public:
    Stack(int size) {
        if (size <= 0) {
            throw invalid_argument("Розмір стека має бути більшим за нуль.");
        }
        
        try {
            data = new T[size];
        } catch (const bad_alloc& e) {
            throw runtime_error("Не вдалося виділити пам'ять для стека.");
        }

        capacity = size;
        topIndex = -1;
    }

    void push(T value) {
        if (topIndex == capacity - 1) {
            throw overflow_error("Переповнення стека: неможливо додати елемент.");
        }
        data[++topIndex] = value;
    }

    T pop() {
        if (isEmpty()) {
            throw underflow_error("Стек порожній: неможливо вилучити елемент.");
        }
        return data[topIndex--];
    }

    T peek() const {
        if (isEmpty()) {
            throw out_of_range("Стек порожній: неможливо переглянути вершину.");
        }
        return data[topIndex];
    }

    bool isEmpty() const {
        return topIndex == -1;
    }

    ~Stack() {
        delete[] data;
    }
};

int main() {
    try {
        Stack<int> myStack(3);

        cout << "Додаємо елементи..." << endl;
        myStack.push(10);
        myStack.push(20);
        myStack.push(30);



        cout << "Вилучаємо: " << myStack.pop() << endl;
        cout << "Вилучаємо: " << myStack.pop() << endl;
        cout << "Вилучаємо: " << myStack.pop() << endl;

        cout << "Вилучаємо: " << myStack.pop() << endl;

    } catch (const overflow_error& e) {
        cerr << "Помилка переповнення: " << e.what() << endl;
    } catch (const underflow_error& e) {
        cerr << "Помилка вилучення: " << e.what() << endl;
    } catch (const exception& e) {
        cerr << "Загальна помилка: " << e.what() << endl;
    }

    return 0;
}