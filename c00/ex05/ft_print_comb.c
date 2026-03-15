#include <unistd.h>

void	ft_putchar(char c)
{
	c = c + '0';
	write(1, &c, 1);
}

// void	ft_print_comb(void)
// {
// 	static int	n[3] = {0, 0, 0};

// 	while (n[0] <= 7)
// 	{
// 		n[1] = n[0] + 1;
// 		while (n[1] <= 8)
// 		{
// 			n[2] = n[1] + 1;
// 			while (n[2] <= 9)
// 			{
// 				ft_putchar(n[0]);
// 				ft_putchar(n[1]);
// 				ft_putchar(n[2]);
// 				if (!(n[0] == 7 && n[1] == 8 && n[2] == 9))
// 					write(1, ", ", 2);
// 				n[2]++;
// 			}
// 			n[1]++;
// 		}
// 		n[0]++;
// 	}
// }
void	ft_print_comb(void)
{
	int	n = 0;

	while (n <= 789)
	{
		if (n / 100 < n / 10 % 10 && n / 10 % 10 < n % 10)
		{
			ft_putchar(n / 100); // = 0.00
			ft_putchar(n / 10 % 10); // = 0.0
			ft_putchar(n % 10); // = 0
			if (!(n == 789))
			write(1, ", ", 2);
		}
		n++;
	}
}
