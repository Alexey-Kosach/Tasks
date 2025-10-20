#pragma warning(disable:4996)
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * @brief расчитывает из радиан в градусы
 * @param параметры с клавиатуры
 * @return конечное значение
 */
double getRadians();
/**
 * @brief рассчитывает из градусов в радианы
 * @param параметры с  клавиатуры
 * @return конечное значение
 */
double getDegrees();
/**
 * @brief считывает значение,
 * введенное с клавиатуры с проверкой ввода
 * @return считанное значение
 */
double getValue();
/**
 * @brief проверяет,что переменная положительная
 * @param value значение проверяемой переменной
 */
void checkValue(const double value);
/**
@brief Radians - переводит значение из радиан в градусы
@brief Degrees - переводит значение иг градусов в радиан
*/
enum { Radians = 1, Degrees = 2 };
/**
 * brief Точка входа в программу
 * @return возвращает 0, если программма выполнена корректно
 */
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
    printf("Выберите %d,если хотите перевести радианы в градусы и %d,если перевести градусы в радианы:", Radians, Degrees);
    int choise = (int)getValue();
    switch (choise)
    {
    case(Radians):
        printf("Значение градусов: %lf", getRadians());
        break;
    case(Degrees):
        printf("Значение радиан:%lf", getDegrees());
        break;
    default:
        printf("Ошибка");
        return 1;
    }
    return 0;
}

double getRadians() {
    printf("Значение радиан:");
    double radians = getValue();
    checkValue(radians);
    return radians * 180 / (M_PI);
}

double getDegrees() {
    printf("Значение градусов:");
    double degrees = getValue();
    checkValue(degrees);
    return degrees * (M_PI) / 180;
}

double getValue()
{
    double value = 0;
    if (!scanf("%lf", &value))
    {
        printf("Error\n");
        abort();
    }
    return value;
}
void checkValue(const double value)
{
    if (value <= 0)
    {
        printf("Value have to be positive\n");
        abort();
    }
}
