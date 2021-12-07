#ifndef EX03_H
#define EX03_H

// EX03
#include "ex02.h"

struct vector2
{
    double x;
    double y;
};

inline vector2 ponderate(vector2 a, vector2 b, double weight = 0.5)
{
    vector2 value;
    value.x = ponderate(a.x, b.x, weight);
    value.y = ponderate(a.y, a.y, weight);

    return value;
}

#endif // EX03_H
