#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Pow(double a, int exp)
{
    double result = 1;
    for (int i = 0; i < exp; ++i)
    {
        result *= a;
    }
    return result + 0.5;
}