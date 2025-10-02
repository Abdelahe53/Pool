#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;
	char	a;

	z = 'z';
	a = 'a';
	while (z >= a)
	{
		write(1, &z, 1);
		z--;
	}
}
