#ifndef EX04_H
#define EX04_H

#include <iostream>
#include <cmath>
#include "ex03.h"

// EX04
inline double distance(vector2 a, vector2 b)
{
    return std::sqrt(std::pow((b.x - a.x), 2) + std::pow((b.y - a.y), 2));
}

#endif // EX04_H
