#include "ex02.h"

// EX02
double ponderate(double a, double b, double weight)
{
    return ((b - a) * weight) + a;
}

double ponderate(double a, double b)
{
    return ponderate(a, b, 0.5);
}
