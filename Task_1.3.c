#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief рассчитывает площадь прямоугольника
 * @param side1 первая сторона прямоугольника
 * @param side2 вторая сторона прямоугольника
 * @return возвращает рассчитанную Площадь
 */
double getI2(const double I_total, const double I1);

/**
 * @brief рассчитывает площадь треугольника
 * @param side3 основание треугольника
 * @param side4 высота треугольника
 * @return возвращает рассчитанную Площадь
 */
double getR(const double U, const double I);

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
 * @brief Точка входа в программу
 * @return возвращает 0, если программма выполнена корректно
 */
int main(void)
{
    const double U = 220.0;
    printf("Enter I_total: ");
    double I_total = getValue();
    checkValue(I_total);
    
    printf("Enter I1: ");
    double I1 = getValue();
    checkValue(I1);
    
    printf("I2= %.2lf\n", getI2(I_total, I1));
    printf("R= %.2lf", getR(U, getI2(I_total, I1)));

    return 0;
}

double getI2(const double I_total, const double I1)
{
    return  I_total - I1;
}

double getR(const double U, const double I)
{
    return  U / I;
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