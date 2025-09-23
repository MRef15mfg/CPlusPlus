#include <iostream>
using namespace std;

int main() {
    double fileSizeGB;
    double speedBps;

    cout << "Введіть розмір файлу (ГБ): ";
    cin >> fileSizeGB;
    cout << "Введіть швидкість інтернет-з’єднання (біт/с): ";
    cin >> speedBps;

    double fileSizeBits = fileSizeGB * 1024 * 1024 * 1024 * 8;

    long long totalSeconds = static_cast<long long>(fileSizeBits / speedBps);

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << "Файл буде завантажено за: "
         << hours << " год "
         << minutes << " хв "
         << seconds << " сек" << endl;

    return 0;
}
