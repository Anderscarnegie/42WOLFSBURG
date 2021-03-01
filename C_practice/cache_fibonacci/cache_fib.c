#include <unistd.h>

static int cache[100] = {0};

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long x;

    x = nb;
    if (x < 0)
    {
        x = x * (-1);
        ft_putchar('-');
    }
    if (x >= 10)
    {
        ft_putnbr(x / 10);
        ft_putnbr(x % 10);
    }
    else
    {
        ft_putchar(x + '0');
    }
}

int fib(int n)
{
    if (n <= 1)
        return n;
    if (cache[n] != 0)
        return cache[n];
    else
    {
        cache[n] = fib(n - 1) + fib(n - 2);
        return cache[n];
    }
}

int main(void)
{
    int res;
    res = fib(55);
    ft_putnbr(res);
    ft_putchar('\n');
}
