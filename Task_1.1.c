

#define _USE_MATH_DEFINES 
#include <math.h>
#include <stdio.h>

/**
* @brief рассчитывает функцию В по заданной формуле
* @param x значение
* @param y значение
* @param z значиние
* @return рассчитать значение

*/
double getB(const double x, const double y, const double z);

/**
* @brief рассчитывает функцию A по заданной формуле
* @param x значение
* @param y значение
* @param z значиние
* @return рассчитать значение

*/
double getA(const double x, const double y, const double z);

/**
* @brief точка входа в программу
* @return возврат нуля, если всё выполнено корректно

*/
int main(void)
{
    const double x = 0.29;
    const double y = 3.7;
    const double z = -1;

    printf("A=%lf\n", getA(x, y, z));
    printf("B=%lf\n", getB(x, y, z));
    return 0;

}
double getB(const double x, const double y, const double z)
{
    return fabs(2*y*z)/(pow(sin(x), 2))-pow(x, 2)/3;
}
double getA(const double x, const double y, const double z)
{
    return 3 * pow(x, y) * log(y) + exp(z * x);
}



