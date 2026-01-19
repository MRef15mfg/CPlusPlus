#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Array {
private:
    long* arr;
    int size;

public:
    Array() : arr(nullptr), size(0) {}

    Array(int n) {
        if (n <= 0) {
            arr = nullptr;
            size = 0;
        } else {
            size = n;
            arr = new long[size];
            for (int i = 0; i < size; i++)
                arr[i] = 0;
        }
    }

    Array(const Array& other) {
        size = other.size;
        if (other.arr == nullptr) {
            arr = nullptr;
        } else {
            arr = new long[size];
            for (int i = 0; i < size; i++)
                arr[i] = other.arr[i];
        }
    }

    ~Array() {
        delete[] arr;
    }

    void fillRandom(int min = 0, int max = 100) {
        if (arr == nullptr) return;
        srand(time(nullptr));
        for (int i = 0; i < size; i++)
            arr[i] = min + rand() % (max - min + 1);
    }

    void fillFromKeyboard() {
        if (arr == nullptr) return;
        for (int i = 0; i < size; i++) {
            cout << "arr[" << i << "] = ";
            cin >> arr[i];
        }
    }

    void print() const {
        if (size == 0 || arr == nullptr) {
            cout << "Масив порожній\n";
            return;
        }
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void add(long value) {
        long* temp = new long[size + 1];
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];
        temp[size] = value;

        delete[] arr;
        arr = temp;
        size++;
    }

    bool removeAt(int index) {
        if (index < 0 || index >= size) return false;
        long* temp = new long[size - 1];
        for (int i = 0, j = 0; i < size; i++)
            if (i != index) temp[j++] = arr[i];

        delete[] arr;
        arr = temp;
        size--;
        return true;
    }

    bool removeByValue(long value) {
        for (int i = 0; i < size; i++)
            if (arr[i] == value) return removeAt(i);
        return false;
    }

    void sort(bool ascending = true) {
        if (size < 2) return;
        for (int i = 0; i < size - 1; i++)
            for (int j = 0; j < size - i - 1; j++)
                if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                    long tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
    }

    long min() const {
        if (size == 0) throw runtime_error("Масив порожній");
        long m = arr[0];
        for (int i = 1; i < size; i++)
            if (arr[i] < m) m = arr[i];
        return m;
    }

    long max() const {
        if (size == 0) throw runtime_error("Масив порожній");
        long m = arr[0];
        for (int i = 1; i < size; i++)
            if (arr[i] > m) m = arr[i];
        return m;
    }

    double average() const {
        if (size == 0) throw runtime_error("Масив порожній");
        long sum = 0;
        for (int i = 0; i < size; i++)
            sum += arr[i];
        return (double)sum / size;
    }
};

int main() {
    Array arr(5);

    arr.fillRandom();
    cout << "Початковий масив: ";
    arr.print();

    arr.add(42);
    cout << "Після додавання 42: ";
    arr.print();

    arr.removeByValue(42);
    cout << "Після видалення 42: ";
    arr.print();

    arr.sort(false);
    cout << "Відсортований за спаданням: ";
    arr.print();

    cout << "Мінімальне: " << arr.min() << endl;
    cout << "Максимальне: " << arr.max() << endl;
    cout << "Середнє: " << arr.average() << endl;

    Array copyArr = arr;
    cout << "Копія масиву: ";
    copyArr.print();

    return 0;
}
