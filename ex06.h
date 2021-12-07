#ifndef EX06_H
#define EX06_H

// EX06
template<int N>
unsigned long long fibonacci()
{
    return (fibonacci<N-1>() + fibonacci<N-2>());
}

template <>
unsigned long long fibonacci<0>()
{
    return 0;
}

template <>
unsigned long long fibonacci<1>()
{
    return 1;
}

#endif // EX06_H
