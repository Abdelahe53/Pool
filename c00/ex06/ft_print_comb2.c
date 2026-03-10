#include <unistd.h>

void	ft_putchar(char c)
{
	c = c + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n;

	n = 0;
		while (n <= 9899)
	{
		if (n / 100 < n % 100)
	{
		ft_putchar(n / 1000);
			ft_putchar(n / 100 % 10);
			write(1, " ", 1);
			ft_putchar(n / 10 % 10);
			ft_putchar(n % 10);
			if (!(n == 9899))
			write(1, ", ", 2);
		}
	n++;
	}
}
