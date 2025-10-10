#include <unistd.h>

int	main()
{
	int j = '0';
	int a = '1';
	int z = '0';

while(j <= '9')
	{
	write(1, &j, 1);
	while(z < '9')
	{
		write(1, &a, 1);
		write(1, &z, 1);
	z++;
	}
j++;}
}
