#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

/*
Лабораторная работа 3. Задание 3. Индивидуальный вариант 24.
Вычислить значение функции y = f(x) при произвольных x.
*/


int main() {
    setlocale(LC_ALL, "ru");
    const double a = 2.4;
    const double b = 1.3;
    double x, f;
    cout << "Введите число X: " << endl;
    cin >> x;
    if (x < 1) {
        f = a / x + b * sin(abs(x));
    }
    else {
        if (x >= 1 && x <= 5) {
            f = log(pow(x + a, 2));
        }
        else {
            f = a * pow(x, 4);
        }
    }
    cout << f << endl;
}