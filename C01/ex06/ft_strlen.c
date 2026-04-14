#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}