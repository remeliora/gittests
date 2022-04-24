#include <iostream>
using namespace std;

float stepeny (float n, int stp);

int main () {
    system("chcp 65001");
    system("cls");

    float n;
    int stp;
    cout << "Введите число: ";
    cin >> n;
    cout << "Введите степень: ";
    cin >> stp;
    cout << "Число " << n << " в степени " << stp << " = " << stepeny(n, stp) << endl;

    return 0;
}

float stepeny (float n, int stp) {
    if (stp < 2) {
        if (stp == 0) return 1;
        return n;
    }
    return (n * stepeny(n, stp-1));
}