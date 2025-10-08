#include <unistd.h>

int	main()
{
	int j = '0';
	int k = '1';

while(j <= '8')
	{
	while(k <= '9')
		{
		write(1, &j, 1);
		write(1, &k, 1);
		write(1, ",", 1);
		k++;
		}
	j++;
	}
}
