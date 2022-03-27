//Составить программу, содержащую функцию, которая подсчитывает число элементов в строке
#include <iostream>
using namespace std;

int elements (const char * str);

int main () {
    int count = elements ("aaaaa");
    cout << count;
}

int elements (const char * str) {
    int count = 0;
    while (*str) {
        count++;
        str++;
    }
    
    return count;
}