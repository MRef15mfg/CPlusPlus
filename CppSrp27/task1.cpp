#include <iostream>
using namespace std;

class CharStack {
private:
    static const int MAX_SIZE = 10;
    char stack[MAX_SIZE];
    int top;

public:
    CharStack() {
        top = -1;
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == MAX_SIZE - 1;
    }

    bool push(char c) {
        if (isFull()) {
            cout << "Стек переповнений!" << endl;
            return false;
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
    CharStack myStack;

    myStack.push('A');
    myStack.push('B');
    myStack.push('C');

    myStack.print();
    cout << "Верхній елемент: " << myStack.peek() << endl;
    cout << "Кількість елементів: " << myStack.size() << endl;

    myStack.pop();
    myStack.print();

    myStack.clear();
    myStack.print();

    return 0;
}