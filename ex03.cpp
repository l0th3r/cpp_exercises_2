#include "ex02.h"

// EX03
struct vector2
{
    double x;
    double y;
};

vector2 ponderate(vector2 a, vector2 b, double weight)
{
    vector2 value;
    value.x = ponderate(a.x, b.x, weight);
    value.y = ponderate(a.y, a.y, weight);

    return value;
}

vector2 ponderate(vector2 a, vector2 b)
{
    return ponderate(a, b, 0.5);
}
