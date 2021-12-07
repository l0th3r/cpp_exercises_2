#include <iostream>
#include <string>

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
