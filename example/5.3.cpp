/* Составить функцию, которая возвращает в качестве результата максимальный элемент
матрицы d размера mxn */
#include <iostream>
using namespace std;

const int m = 3;
const int n = 4;

int max (int[][n], int m);

int main () {
    system("chcp 65001");
    system("cls");

    int matrix[m][n] = {{75, 87, 65, 90}, {96, 84, 89, 73}, {70, 69, 85, 325}};
    cout << "Максимальный элемент: " << max (matrix, m) << endl;
}

int max (int arr[][n], int rows) {
    int maximum = arr[0][0];
    for (int i = 0; i < rows; i++)
    for (int j = 0; j < n; j++)
    if (arr[i][j] > maximum)
    maximum = arr[i][j];
    
    return maximum;
}