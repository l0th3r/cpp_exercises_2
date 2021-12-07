#ifndef EX09_H
#define EX09_H

#include <iostream>

// EX09
template<typename T>
double sum(T unique)
{
    return unique;
}

template<typename F, typename... R>
double sum(F first, R... rest)
{
    return first + sum(rest...);
}

#endif // EX09_H
