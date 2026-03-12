#include <iostream>

template <typename T>
struct Node {
    T data;
    Node* next;
    Node(T val) : data(val), next(nullptr) {}
};

template <typename T>
class List {
private:
    Node<T>* head;
public:
    List() : head(nullptr) {}

    void push_front(T val) {
        Node<T>* newNode = new Node<T>(val);
        newNode->next = head;
        head = newNode;
    }

    void push_back(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node<T>* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    void pop_front() {
        if (!head) return;
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }

    void printAll() const {
        Node<T>* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    bool isEmpty() const { return head == nullptr; }

    ~List() {
        while (!isEmpty()) pop_front();
    }
};

class Point {
public:
    double x, y;
    Point() : x(0), y(0) {}
    Point(double x, double y) : x(x), y(y) {}

    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

class Vector {
private:
    List<Point> points;
    int size;

public:
    Vector() : size(0) {}

    void addAtBeginning(Point p) {
        points.push_front(p);
        size++;
    }

    void addAtEnd(Point p) {
        points.push_back(p);
        size++;
    }

    void removeFirst() {
        if (size > 0) {
            points.pop_front();
            size--;
        }
    }

    void Print() const {
        std::cout << "Vector (size " << size << "): ";
        points.printAll();
    }
};

int main() {
    Vector myVector;

    myVector.addAtEnd(Point(1.2, 3.4));
    myVector.addAtEnd(Point(5.6, 7.8));
    myVector.addAtBeginning(Point(0, 0));

    myVector.Print();

    myVector.removeFirst();
    std::cout << "After removing first element:" << std::endl;
    myVector.Print();

    return 0;
}