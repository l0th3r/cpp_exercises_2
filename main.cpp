#include <iostream>
#include <cmath>

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
// EX09


extern "C" {
#define DECL_SUM(NUMBER){\
    double sum##NUMBER();\
}

#define DEFN_SUM(NUMBER){\
    double sum##NUMBER(){\
        \
    }\
}
}

int main(int argc, char *argv[])
{
    long a = 10;
    long b = 5;

    std::cout << sum(a, b) << std::endl;
    return 0;
}
