#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int temp;
	temp = size;
	size = *tab;
	tab = &temp;

	while (tab[0] != size)
	{
		printf("%d ", tab[0]);
		tab++;
	}
}

int main()
{
	int zab[] = {2, 1, 5, 10, 6};
	int gza = sizeof(zab) / sizeof(zab[0]);
	ft_rev_int_tab(zab, zab[gza - 1]);
}