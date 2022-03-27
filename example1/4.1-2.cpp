#include <iostream>
#include "D:/max.cpp"
using namespace std;

int main () {
    // Настройка для правильного отображения русского языка
    system("chcp 65001");
    system("cls");

    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "Максимальное: " << max (a, b) << endl;

    return 0;
}