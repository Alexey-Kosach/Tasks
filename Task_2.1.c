#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief рассчитывает площадь прямоугольника
 * @param side1 первая сторона прямоугольника
 * @param side2 вторая сторона прямоугольника
 * @return возвращает рассчитанную Площадь
 */
double getSquare1(const double side1, const double side2);

/**
 * @brief рассчитывает площадь треугольника
 * @param side3 основание треугольника
 * @param side4 высота треугольника
 * @return возвращает рассчитанную Площадь
 */
double getSquare2(const double side1, const double side2);

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
    printf("Enter sides of rectangle: ");
    double side1 = getValue();
    checkValue(side1);
    double side2 = getValue();
    checkValue(side2);
    printf("Enter sides of triangle: ");
    double side3 = getValue();
    checkValue(side3);
    double side4 = getValue();
    checkValue(side4);
    printf("Square of rectangle= %.2lf\n", getSquare1(side1, side2));
    printf("Square of triangle= %.2lf", getSquare2(side3, side4));

    return 0;
}

double getSquare1(const double side1, const double side2)
{
    return  side1 * side2;
}

double getSquare2(const double side1, const double side2)
{
    return  0.5 * side1 * side2;
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