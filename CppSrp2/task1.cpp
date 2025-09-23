#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, ".UTF-8");
    int hours, minutes, seconds; 
    cout << "Запишіть секунди : ";
    cin >> seconds;

    hours = seconds / 3600;
    minutes =  (seconds % 3600) / 60 ;
    seconds = seconds % 60;

    cout << endl << "Години :" << hours << "\nХвилини : " << minutes << "\nСекунди : " << seconds << endl; 

    return 0;
}
