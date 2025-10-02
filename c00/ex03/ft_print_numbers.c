#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a;
	char	z;

	a = '0';
	z = '9';
	while (a <= z)
	{
		write(1, &a, 1);
		a++;
	}
}
