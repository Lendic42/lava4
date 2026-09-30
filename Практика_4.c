#include <stdio.h>

void homework(void)
{
    int A;
    int B;

    printf("Домашнее задание, вариант 7. Введите два числа A и B: ");
    scanf("%d %d", &A, &B);
    printf("Новый пароль действует: %d\n", (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0));
}

int main(void)
{
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    int integer_part;
    float fractional_part;
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;
    int n;
    int first_digit;
    int middle_digit;
    int last_digit;
    int digit_sum;
    int reversed_number;

    printf("Начальные значения: char = %c, int = %d, float = %f, double = %e\n", c, i, f, d);
    printf("Введите символ: ");
    scanf("%c", &c);
    printf("Введите целое число i: ");
    scanf("%d", &i);
    printf("Введите вещественное число float: ");
    scanf("%f", &f);
    printf("Введите вещественное число double: ");
    scanf("%lf", &d);
    printf("Введённые значения: char = %c, int = %d, float = %f, double = %e\n", c, i, f, d);

    integer_part = (int)f;
    fractional_part = f - integer_part;
    printf("Целая часть: %d, дробная часть: %.6f\n", integer_part, fractional_part);
    printf("Десятичный код: %d, шестнадцатеричный код: %X\n", c, (unsigned int)c);
    printf("1 / %d = %.6f\n", i, 1.0 / i);

    x = a / b;
    y = a / b;
    z = a / b;
    printf("При a = %d и b = %d: int x = %d, float y = %.6f, double z = %.6f\n", a, b, x, y, z);
    printf("(float)a / b = %.6f\n", (float)a / b);
    printf("(float)(a / b) = %.6f\n", (float)(a / b));
    printf("(double)a / b = %.6f\n", (double)a / b);
    printf("(double)(a / b) = %.6f\n", (double)(a / b));

    printf("Введите целое трёхзначное число N: ");
    scanf("%d", &n);
    last_digit = n % 10;
    first_digit = n / 100;
    middle_digit = (n / 10) % 10;
    digit_sum = first_digit + middle_digit + last_digit;
    reversed_number = last_digit * 100 + middle_digit * 10 + first_digit;
    printf("Последняя цифра %d, первая цифра %d, сумма цифр %d, число наоборот %d\n",
           last_digit, first_digit, digit_sum, reversed_number);

    homework();
    return 0;
}