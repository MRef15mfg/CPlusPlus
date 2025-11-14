#include <iostream>
#include <cstdlib>
using namespace std;

int secretNumber;

void generate()
{
    secretNumber = 1000 + rand() % 9000;
}

int countBulls(int x)
{
    int s = secretNumber;
    int bulls = 0;

    for (int i = 0; i < 4; i++)
    {
        if (x % 10 == s % 10)
        {
            bulls++;
        }

        x = x / 10;
        s = s / 10;
    }

    return bulls;
}

int countCows(int x)
{
    int s = secretNumber;
    int a[4];
    int b[4];

    for (int i = 0; i < 4; i++)
    {
        a[i] = x % 10;
        b[i] = s % 10;

        x = x / 10;
        s = s / 10;
    }

    int cows = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j && a[i] == b[j])
            {
                cows++;
            }
        }
    }

    return cows;
}

int play(int attempts)
{
    int guess;

    cout << "Enter number: ";
    cin >> guess;

    int B = countBulls(guess);
    int C = countCows(guess);

    cout << "Bulls: " << B << "  Cows: " << C << endl;

    if (B == 4)
    {
        return attempts;
    }

    return play(attempts + 1);
}

int main()
{
    generate();

    int tries = play(1);

    cout << "Solved in " << tries << " attempts\n";

    return 0;
}
