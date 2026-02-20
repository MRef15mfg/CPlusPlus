#include <iostream>
using namespace std;

class DynamicCharStack {
private:
    char* stack;
    int top;
    int capacity;

    void resize() {
        int newCapacity = capacity * 2;
        char* newStack = new char[newCapacity];
        for (int i = 0; i <= top; i++) {
            newStack[i] = stack[i];
        }
        delete[] stack;
        stack = newStack;
        capacity = newCapacity;
        cout << "Стек збільшено до " << capacity << " елементів." << endl;
    }

public:
    DynamicCharStack(int initialCapacity = 5) {
        capacity = initialCapacity;
        stack = new char[capacity];
        top = -1;
    }

    ~DynamicCharStack() {
        delete[] stack;
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool push(char c) {
        if (top == capacity - 1) {
            resize();
        }
        stack[++top] = c;
        return true;
    }

    bool pop() {
        if (isEmpty()) {
            cout << "Стек порожній!" << endl;
            return false;
        }
        top--;
        return true;
    }

    char peek() const {
        if (isEmpty()) {
            cout << "Стек порожній!" << endl;
            return '\0';
        }
        return stack[top];
    }

    int size() const {
        return top + 1;
    }

    void clear() {
        top = -1;
    }

    void print() const {
        if (isEmpty()) {
            cout << "Стек порожній" << endl;
            return;
        }
        cout << "Стек: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicCharStack myStack(3);

    myStack.push('X');
    myStack.push('Y');
    myStack.push('Z');
    myStack.push('W');

    myStack.print();
    cout << "Верхній елемент: " << myStack.peek() << endl;

    myStack.pop();
    myStack.print();

    myStack.clear();
    myStack.print();

    return 0;
}