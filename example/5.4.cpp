/* Составить программу, в котрой с помощью функции подсчитывается количество
k отрицательных элементов в массиве q размеров mxn */
#include <iostream>
using namespace std;

const int m = 3;
const int n = 4;

int max (int[][n], int m);

int main () {
    system("chcp 65001");
    system("cls");

    int matrix[m][n] = {{75, 87, -65, 90}, {96, 84, -89, 73}, {70, -69, 85, 325}};
    cout << "Кол-во отрицательных элементов: " << max (matrix, m) << endl;
}

int max (int arr[][n], int rows) {
    int neg_count = 0;
    for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
    if (arr[i][j] < 0)
    neg_count++;
    return neg_count;
}