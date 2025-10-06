#pragma warning(disable:4996)



#define _USE_MATH_DEFINES // for C
#include <math.h>
#include <stdio.h>
/**
 * @brief рассчитывает значение угла в градусах
 * @param radians значение угла в радианах
 * @return возвращает рассчитанное значение
 */
double getDegrees(const double radians);
/**
 * @brief рассчитывает значение угла в минутах
 * @param radians значение угла в радианах
 * @return возвращает рассчитанное значение
 */
double getMinutes(const double radians);
/**
 * @brief рассчитывает значение угла в секундах
 * @param radians значение угла в радианах
 * @return возвращает рассчитанное значение
 */
double getSeconds(const double radians);
/**
 * @brief Точка входа в программу
 * @return возвращает 0, если программма выполнена корректно
 */
int main(void)
{
    double radians;
    printf("Enter yor corner: ");
    scanf("%lf", &radians);
    printf("Corner in degrees %.2lf\n", getDegrees(radians));
    printf("Corner in minutes %.2lf\n", getMinutes(radians));
    printf("Corner in seconds %.2lf\n", getSeconds(radians));
    return 0;
}

double getDegrees(const double radians)
{
    return radians * (180.0 / M_PI);
}
double getMinutes(const double radians)
{
    return (radians * (180.0 / M_PI))*60;
}
double getSeconds(const double radians)
{
    return (radians * (180.0 / M_PI)) * 60 * 60;
}
