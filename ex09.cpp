// EX09
template<typename... ARGS>
double sum(long first, ARGS... args)
{
    return first + sum(args...);
}

template<>
double sum(long first)
{
    return first;
}
