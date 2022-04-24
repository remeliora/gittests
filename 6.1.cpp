#include <iostream>
using namespace std;

int even (const int& n);

int main () {
    system("chcp 65001");
    system("cls");

    int n;
    cout << "Введите число: ";
    cin >> n;

    if (even (n) == 1) {
        cout << "Число чётное!" << endl;
    }
    else {
        cout << "Число нечётное!" << endl;
    }

    return 0;
}

int even (const int& n) {
    if (n%2 == 1)
    return 0;
    return 1;
}