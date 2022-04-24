#include <iostream>
using namespace std;

int NOD (int x, int y);

int main () {
    system("chcp 65001");
    system("cls");
    
    int x, y;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;

    cout << "НОД = " << NOD (x, y) << endl;
    return 0;
}

int NOD (int x, int y) {
    if (y == 0) {
        return x;
    }
    return (NOD (y, x%y));
}