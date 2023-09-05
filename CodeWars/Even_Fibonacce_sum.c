typedef unsigned long long ull;

ull even_fib(ull limit)
{
    ull a = 0, b = 1;
    ull sum = 0, next;

    while (b < limit)
    {
        if (b % 2 == 0)
        {
            sum += b;
        }
        next = a + b;
        a = b;
        b = next;
    }

    return sum;
}
