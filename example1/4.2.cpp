/*Составить программу, включающую в свой состав функцию, при обращении к которой
обеспечивается выдача на экран символа, набранного с клавиатуры.
При нажатии клавиши с символом "С" выполнение программы завершить*/
#include <iostream>
using namespace std;

void symbol (char);

int main () {
    char a;
    while (true) {
        cin >> a;
        if (a == 'C' || a == 'c') return 0;
        else symbol (a);
        cout << endl;
    }
}

void symbol (char a) {
    cout << a;
}