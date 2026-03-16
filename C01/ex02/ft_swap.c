#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a; //swap is 1
    *a = *b; // a is 2
    *b = swap; // b is 1
}