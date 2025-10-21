#include <unistd.h>

int main()
{
	int	a;
	int	b;

        a = '0';
	while (a <= '9')
		{
		b = a + 1;
		while (b <= '9')
		{
			write(1, &a ,1);
			write(1, &b ,1);
			write(1, ", ", 2);
		b++;
		}
	a++;
	}
}
