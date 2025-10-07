#include <unistd.h>

int	main()
{
	int j = '0';
	int k = '1';
	int i = '2';

while(j <= '7')
	{
	write(1, &j ,1);
	while(k <= '8')
		{
		write(1, &k, 1);
		while(i <= '9')
			{
			write(1, &i, 1);
			j++;
			}
		k++;
		}
	i++;
	}
}
