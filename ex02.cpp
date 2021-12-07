#include "ex02.h"

// EX02
double ponderate(double a, double b, double weight)
{
    return (a * (weight - 1)) + (weight * b);
}
