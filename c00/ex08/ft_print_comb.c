#include <unistd.h>

void ft_putchar(char c)
{
    c = c + '0';
    write(1, &c, 1);
}

void ft_print_combn(int n)
{
    
}

int main()
{
    ft_print_combn(5);
}

