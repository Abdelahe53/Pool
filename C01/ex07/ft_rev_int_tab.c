#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
    int l = size - 1;
    while (i < l)
    {
        ft_swap(&tab[i], &tab[l]);
        i++;
        l--;
    }
}