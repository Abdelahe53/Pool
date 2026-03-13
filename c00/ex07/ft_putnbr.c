//INT_MAX: 2147483647
//INT_MIN: 2147483648

#include <unistd.h>

void ft_putnbr(int nb)
{
    int rest;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    if (nb / 10 > 0)
    {
        ft_putnbr(nb / 10);
        rest = nb % 10 + '0';
        write(1, &rest, 1);
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        ft_putnbr(nb * -1);
    }
}

int main()
{
    ft_putnbr(1223);
<<<<<<< HEAD
}
=======
}
>>>>>>> b86e2ea (a)
