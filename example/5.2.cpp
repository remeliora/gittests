/* Составить программу, в которой функция вычисляет сумму элементов массива, 
состоящего из 5 элементов */
#include <iostream>
using namespace std;

const int ArrSize = 5;
int arr_sum (int arr[], int size);

int main () {
    system("chcp 65001");
    system("cls");

    int arr[ArrSize] = {5, 3, 8, 1, 0};
    cout << "Сумма элементов в массиве: " << arr_sum (arr, ArrSize);
}

int arr_sum (int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    
    return sum;
}