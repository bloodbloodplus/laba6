#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    int yeas;
    setlocale(LC_ALL, "Russian");

    printf("Введите год: ");
    scanf("%d", &yeas);

    if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0))
    {
        printf("Год %d високосный\n", yeas);
    }
    else
    {
        printf("Год %d не високосный\n", yeas);
    }

    return 0;
}