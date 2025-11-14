#include <iostream>
using namespace std;

bool isLeap(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

int daysInMonth(int month, int year)
{
    if (month == 2)
    {
        if (isLeap(year))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        return arr[month - 1];
    }
}

int dateToDays(int d, int m, int y)
{
    int days = d;

    for (int i = 1; i < m; i++)
    {
        days = days + daysInMonth(i, y);
    }

    for (int i = 1; i < y; i++)
    {
        if (isLeap(i))
        {
            days = days + 366;
        }
        else
        {
            days = days + 365;
        }
    }

    return days;
}

int main()
{
    int d1, m1, y1;
    int d2, m2, y2;

    cout << "Enter first date: ";
    cin >> d1 >> m1 >> y1;

    cout << "Enter second date: ";
    cin >> d2 >> m2 >> y2;

    int result = dateToDays(d2, m2, y2) - dateToDays(d1, m1, y1);

    cout << "Difference = " << result << " days\n";

    return 0;
}
