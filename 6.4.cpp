#include <iostream>
using namespace std;

int** create_mas (int n);
void output (int** mas, int n);

int main () {
    system("chcp 65001");
    system("cls");

    int n;
    int** mas;
    cout << "Введите кол-во строк и столбцов квадратной матрицы: ";
    cin >> n;
    cout << endl << "Квадратная матрица: " << endl;
    mas = create_mas (n);
    output (mas, n);        

    return 0;
}

int** create_mas (int n) {
    int** mas = new int* [n];
    for (int i = 0; i < n; i++) mas[i] = new int [n];

    return mas;
}

void output (int** mas, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) mas [i][j] = 1;
            else mas [i][j] = 0;
            cout << mas [i][j] << " ";
        }
        cout << endl;   
    }
}