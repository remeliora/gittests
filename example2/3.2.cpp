/* Игрок бросает 2 кости, каждая кость имеет 6 граней, эти грани
помечены 1-6. После броска вычисляется сумма цифр 2-х верхних граней.
Если сумма после первого броска равна 7 или 11 - игрок выйграл.
Если сумма после первого броска равна 2, 3 или 12 - игрок проигрывает.
Если сумма после первого броска равна 4, 5, 6, 8, 9 или 10 - эта
сумма становится очками. Чтобы выйграть, игрок должен бросать кости до тех
пор, пока не выпадет сумма, равная его очкам.
Игрок проигрывает, если во время этих бросков ему выпадет сумма 7. */
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int fun();

int main() {
    system("chcp 65001");
    system("cls");

    srand(time(NULL));
    int x1, x2, score = 0, sum = 0;
    bool game = true;
    while (game == true) {
        x1 = fun();
        x2 = fun();
        sum = x1 + x2;
        switch (sum) {
            case 7: case 11: cout << "\nСумма равна: " << sum << " Вы выиграли!" << endl; game = false; break;
            case 2: case 3: case 12: cout << "\nСумма равна: " << sum << " Вы проиграли!" << endl; game = false; break; 
            case 4: case 5: case 6: case 8: case 9: case 10:
            cout << "\nСумма равна: " << sum << " Игра продолжается." << endl << endl;
            while (score != sum) {
                x1 = fun();
                x2 = fun();
                score = x1 + x2;
                if (score == sum) {
                    cout << "Ваш счёт: " << score << " Вы выиграли!" << endl; game = false; break;
                }
                if (score == 7) {
                     cout << "Ваш счёт: " << score << " Вы проиграли!" << endl; game = false; break;
                }
                else {
                    cout << "Ваш счёт: " << score << " Игра продолжается." << endl;
                }
            }
        }
    }
    system("pause");
    
    return 0;
}

int fun() {
    return (1 + rand() % 6);
}