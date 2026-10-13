#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, 'RUS');
    int h, m;
    double t;

    printf("Введите часы (0-24): ");
    scanf("%d", &h);

    printf("Введите минуты (0-60): ");
    scanf("%d", &m);

    if (h >= 0 && h <= 24 && m >= 0 && m <= 60)
    {
        t = (60.0 * h + m) * 12.0 / 11.0;
        printf("Время встречи стрелок: %.2f минут\n", t);
    }
    else
    {
        printf("Ошибка ввода данных\n");
    }

    return 0;
}
