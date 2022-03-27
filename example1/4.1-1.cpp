// Максимум из двух чисел
#include <iostream>
using namespace std;

int max (int, int);

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

int max (int x, int y) {
    int max = x;
    if (y > max) {
        max = y;
    }
    return max;
}