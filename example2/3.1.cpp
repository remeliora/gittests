#include <iostream>
using namespace std;

int passed (int, int, int);

int main () {
    // Настройка для правильного отображения русского языка
    system("chcp 65001");
    system("cls");
    
    int hour_1, hour_2, min_1, min_2, sec_1, sec_2;
    cout << "Введите первый временной промежуток: " << endl;
    cin >> hour_1 >> min_1 >> sec_1;
    cout << "Введите второй временной промежуток: " << endl;
    cin >> hour_2 >> min_2 >> sec_2;
    int passed_1 = passed (hour_1, min_1, sec_1);
    int passed_2 = passed (hour_2, min_2, sec_2);
    cout << "Между первым промежутком "  << hour_1 << ":" << min_1 << ":" << sec_1 << endl;
    cout << "и вторым промежутком " << hour_2 << ":" << min_2 << ":" << sec_2 << endl;
    while (hour_2 > 12) {
        hour_2 -= ((hour_2 / 12) * 12);
    }
    cout << "прошло в секундах: " << abs (passed_2 - passed_1);
}

int passed (int hour, int min, int sec) {
    return (hour * 60 * 60 + min * 60 + sec);
}