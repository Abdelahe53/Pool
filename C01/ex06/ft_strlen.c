#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void putnbr(int nb)
{
	if (nb / 10)
	{
		putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

int	ft_strlen(char *str)
{
	int		count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	putnbr(count);
	return (count);
}
// int main()
// {
// 	ft_strlen("abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
// }