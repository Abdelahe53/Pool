//INT_MAX: 2147483647
//INT_MIN: 2147483648

#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
    int rest;

    if (nb == 2147483647)
        write(1, "2147483647", 10);

    else if (nb == -2147483648)
    {
        write(1, "-", 1);
        write(1, "2147483648", 10);
    }
    else if (nb > 9)
    {
        nb = nb % 10 + '0';
        write(1, &nb, 1);
        ft_putnbr(nb);
    }
    else
    {
        write(1, &nb, 1);
    }
}

int main()
{
    ft_putnbr(243);
}