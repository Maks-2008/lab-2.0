// lab_03.cpp
// Автор: <твоє прізвище, ім’я>
// Лабораторна робота №2
// Варіант 3
// Обчислення значень двома способами

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;   // вхідний параметр
    double z1;  // результат 1-го виразу
    double z2;  // результат 2-го виразу

    cout << "a = ";
    cin >> a;

    // Обчислення за формулами
    z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * pow(sin(2 * a), 2));
    z2 = 2 * sin(a);

    // Вивід результатів
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}