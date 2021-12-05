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
