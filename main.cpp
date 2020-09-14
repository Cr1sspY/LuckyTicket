#include <iostream>

using namespace std;

int main()
{
    int TickNum, var, dig = 0, zero, half = 1, left, right, left_sum = 0, right_sum = 0;

    cout << "Enter your ticket number: ";
    cin >> TickNum;
    var = TickNum; // заносим номер билета в переменную var

    while (var > 0){ // цикл определ€ет количество цифр в номере
        var /= 10;
        dig++; // это переменна€-счЄтчик. в неЄ записываю количество цифр
    }

    if (dig % 2 == 0) { // путь, если цифр чЄтное количество
        zero = dig / 2; // в эту переменную записываю количество нулей

        while (zero > 0){ // цикл, чтобы получить число с нул€ми (10, 100, 1000 и тд)
            half = half * 10; // сюда записываетс€ это число
            zero--;
        }

        left = TickNum / half; // отдел€ем левую часть
        right = TickNum % half; // и правую
    }

    else { // путь, если цифр нечЄтное количество
        zero = dig / 2;

        while (zero > 0){ // цикл, чтобы получить число с нул€ми (10, 100, 1000 и тд)
            half = half * 10; // сюда записываетс€ это число
            zero--;
        }

        left = TickNum / half / 10; // отдел€ем левую часть
        right = TickNum % half; // и правую
    }

    while (left > 0) { // вычисл€ю сумму левых чисел
        left_sum = left_sum + left % 10;
        left /= 10;
    }

    while (right > 0) { // вычисл€ю сумму правых чисел
        right_sum = right_sum + right % 10;
        right /= 10;
    }

    if (left_sum == right_sum) { // сравниваем суммы
        cout << "Lucky 38!!!";
    }

    else {
        cout << "Unlucky, Guys :c";
    }

    return 0;
}
