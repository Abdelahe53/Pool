#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int a;
    int b;

    void function();
    {
        a = '0';
        while (a <= '9')
        {
            b = a;
            while (b <= '9')
            {
                ft_putchar(a);
                ft_putchar(b);
                write(1, " ", 1);
                write(1, ", ", 1);
                b++;
            }
            a++;
        }
    }
}

int main()
{
    ft_print_comb2();
}

