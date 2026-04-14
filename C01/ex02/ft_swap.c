#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a; // var swap holds 
    *a = *b;
    *b = swap;
}