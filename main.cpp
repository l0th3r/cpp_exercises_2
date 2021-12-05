#include <iostream>
#include <cmath>

// EX01
std::string string_range(int begin, int end)
{
    if(end < begin)
        return "";

    std::string str = "";
    int i = begin;
    while(i <= end)
    {
        str += std::to_string(i);

        if(i < end)
            str += ",";

        i++;
    }

    return str;
}

std::string string_range(int end)
{
    return string_range(1, end);
}

// EX02
double ponderate(double a, double b, double weight)
{
    return ((b - a) * weight) + a;
}

double ponderate(double a, double b)
{
    return ponderate(a, b, 0.5);
}

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

// EX04
inline double distance(vector2 a, vector2 b)
{
    return std::sqrt(std::pow((b.x - a.x), 2) + std::pow((b.y - a.y), 2));
}

// EX05
int sum_range(int begin, int end)
{
    int sum = 0;
    int range = end - begin;
    begin > end ? range = -range + 1 : range += 1;

    int i = 0;
    while(i < range)
    {
        int value;
        begin > end ? value = -(i + -begin) : value = i + begin;

        sum += value;
        i++;
    }

    return sum;
}

// EX06
template<int N>
unsigned long long fibonacci()
{
    if(N <= 1)
        return N;
    return (fibonacci<N-1>() + fibonacci<N-2>());
}

template <>
unsigned long long fibonacci<0>()
{
    return 1;
}

int main()
{
    std::cout << fibonacci<1>() << std::endl;
    return 0;
}
