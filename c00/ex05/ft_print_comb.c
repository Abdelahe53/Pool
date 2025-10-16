#include <unistd.h>

int main()
{
	int	b;
	int	c;

	b = '0';
	c = '1';
	while (b <= '8')
	{
		while (c <= '9')
		{
			write(1, &b, 1);
			write(1, &c, 1);
			if (b < '8' || c < '9')
				write(1, ",", 1);
			c++;
		}
		c = b + 1;
		b++;
	}
	write(1, "\n", 1);
}
