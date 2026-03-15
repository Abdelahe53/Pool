//INT_MAX: 2147483647
//INT_MIN: 2147483648

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
    }
    else if (nb < 0)
    {
        write(1, "-", 1);
        ft_putnbr(nb * -1);
    }
	else
	{
		ft_putchar(nb + '0');
	}
}
