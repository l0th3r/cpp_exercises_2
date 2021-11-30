#include <iostream>

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


int main()
{
    std::cout << ponderate(0, 10) << std::endl;
    return 0;
}
