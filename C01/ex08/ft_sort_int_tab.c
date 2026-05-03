void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a; // var swap holds 
    *a = *b;
    *b = swap;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0; // starts always at 0

    while (i < size - 1)
    {
        int j = 0;
        while (j < size - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                ft_swap(&tab[j], &tab[j + 1]);
            }
            j++;
        }
        i++;
    }
}