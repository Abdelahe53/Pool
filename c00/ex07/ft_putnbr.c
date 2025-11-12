#include <unistd.h>

void ft_putnbr(int nb)
{
	long double div;
	long double temp;

	if (nb <= 2147483647)
	{
		div = (2147483647 / nb) + '0';
		temp = (2147483647 / div) + '0';
		write(1, &temp, 10);
	}
}

int main()
{
	ft_putnbr(4);
}
