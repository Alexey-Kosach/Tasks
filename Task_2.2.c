#pragma warning(disable:4996)

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

/**
 * @brief - Расчет функции y по формуле
 * @param x - значение переменной х
 * @return - рассчитанное значение
 */
double getY(const double x, const double a);

/**
 * @brief - Точка входа в программу
 * @return - вызвращает 0, если программа выполнена корректно
 */
int main()
{
    double x = 0;
    double a = 1.1;
    printf("Enter 'x': ");
    scanf("%lf", &x);
    printf("y = %.2lf", getY(x, a));
    return 0;
}

double getY(const double x, const double a)
{
    if (x > 1.2)
    {
        return log(x)*M_PI;
    }
    else if (x < 1.2)
    {
        return (cos(pow(x, 2))/ sin(pow(x, 2))) + (a*pow(x, 2)) / 2;
    }
    else
    {
        return 3;
    }
}